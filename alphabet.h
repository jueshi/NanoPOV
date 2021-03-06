/******************************************************************************\
|                                     ,,                                       |
|                    db             `7MM                                       |
|                   ;MM:              MM                                       |
|                  ,V^MM.    ,pP"Ybd  MMpMMMb.  .gP"Ya `7Mb,od8                |
|                 ,M  `MM    8I   `"  MM    MM ,M'   Yb  MM' "'                |
|                 AbmmmqMA   `YMMMa.  MM    MM 8M""""""  MM                    |
|                A'     VML  L.   I8  MM    MM YM.    ,  MM                    |
|              .AMA.   .AMMA.M9mmmP'.JMML  JMML.`Mbmmd'.JMML.                  |
|                                                                              |
|                                                                              |
|                                ,,    ,,                                      |
|                     .g8"""bgd `7MM    db        `7MM                         |
|                   .dP'     `M   MM                MM                         |
|                   dM'       `   MM  `7MM  ,p6"bo  MM  ,MP'                   |
|                   MM            MM    MM 6M'  OO  MM ;Y                      |
|                   MM.    `7MMF' MM    MM 8M       MM;Mm                      |
|                   `Mb.     MM   MM    MM YM.    , MM `Mb.                    |
|                     `"bmmmdPY .JMML..JMML.YMbmd'.JMML. YA.                   |
|                                                                              |
\******************************************************************************/
/******************************************************************************\
| Copyright (c) 2012, Asher Glick                                              |
| All rights reserved.                                                         |
|                                                                              |
| Redistribution and use in source and binary forms, with or without           |
| modification, are permitted provided that the following conditions are met:  |
|                                                                              |
| * Redistributions of source code must retain the above copyright notice,     |
|   this list of conditions and the following disclaimer.                      |
| * Redistributions in binary form must reproduce the above copyright notice,  |
|   this list of conditions and the following disclaimer in the documentation  |
|   and/or other materials provided with the distribution.                     |
|                                                                              |
| THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  |
| AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    |
| IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   |
| ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE    |
| LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR          |
| CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         |
| SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS     |
| INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      |
| CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)      |
| ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   |
| POSSIBILITY OF SUCH DAMAGE.                                                  |
\******************************************************************************/
#include "Arduino.h"

#define LENGTH 7

char * stringToByte(char * L1, char * L2, char * L3, char * L4, char * L5, char * L6, char * L7, char * L8) {
  char * returnValue = (char *) malloc (LENGTH*sizeof(char));
  for (int i = 0; i < LENGTH; i++) {
    returnValue[i] = ((L1[i]==' '?0:1) << 0 |
                      (L2[i]==' '?0:1) << 1 |
                      (L3[i]==' '?0:1) << 2 |
                      (L4[i]==' '?0:1) << 3 |
                      (L5[i]==' '?0:1) << 4 |
                      (L6[i]==' '?0:1) << 5 |
                      (L7[i]==' '?0:1) << 6 |
                      (L8[i]==' '?0:1) << 7);

  }
  return returnValue;
}

void loadAlphabet(char ** &letters) {
  letters = (char **) malloc (128 * sizeof(char **) );
  
  
  
  letters['#'] = stringToByte("#######",
                              "#######",
                              "#######",
                              "#######",
                              "#######",
                              "#######",
                              "#######",
                              "#######");
  
  letters[' '] = stringToByte("       ",
                              "       ",
                              "       ",
                              "       ",
                              "       ",
                              "       ",
                              "       ",
                              "       ");
  
  letters['A'] = stringToByte("   #   ",
                              "  ###  ",
                              " #   # ",
                              "#     #",
                              "#######",
                              "#     #",
                              "#     #",
                              "#     #");
                              
  letters['B'] = stringToByte("#####  ",
                              "#    # ",
                              "#    # ",
                              "#####  ",
                              "#    # ",
                              "#     #",
                              "#     #",
                              "###### ");
                              
  letters['C'] = stringToByte("  #####",
                              " #     ",
                              "#      ",
                              "#      ",
                              "#      ",
                              "#      ",
                              " #     ",
                              "  #####");
                              
  letters['D'] = stringToByte("#####  ",
                              "#    # ",
                              "#     #",
                              "#     #",
                              "#     #",
                              "#     #",
                              "#    # ",
                              "#####  ");
                              
  letters['E'] = stringToByte("#######",
                              "#      ",
                              "#      ",
                              "#######",
                              "#      ",
                              "#      ",
                              "#      ",
                              "#######");
                              
  letters['F'] = stringToByte("#######",
                              "#      ",
                              "#      ",
                              "#######",
                              "#      ",
                              "#      ",
                              "#      ",
                              "#      ");
                              
  letters['G'] = stringToByte("  #####",
                              " #     ",
                              "#      ",
                              "#      ",
                              "#   ###",
                              "#     #",
                              " #    #",
                              "  #####");
                              
  letters['H'] = stringToByte("#     #",
                              "#     #",
                              "#     #",
                              "#######",
                              "#     #",
                              "#     #",
                              "#     #",
                              "#     #");
                              
  letters['I'] = stringToByte("#######",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "#######");
                              
  letters['J'] = stringToByte("#######",
                              "     # ",
                              "     # ",
                              "     # ",
                              "     # ",
                              "#    # ",
                              " #   # ",
                              "  ###  ");
                              
  letters['K'] = stringToByte("#    # ",
                              "#   #  ",
                              "#  #   ",
                              "# #    ",
                              "#  #   ",
                              "#   #  ",
                              "#    # ",
                              "#     #");
                              
  letters['L'] = stringToByte("#      ",
                              "#      ",
                              "#      ",
                              "#      ",
                              "#      ",
                              "#      ",
                              "#      ",
                              "#######");
                              
  letters['M'] = stringToByte("#     #",
                              "##   ##",
                              "# # # #",
                              "#  #  #",
                              "#     #",
                              "#     #",
                              "#     #",
                              "#     #");
                              
  letters['N'] = stringToByte("#     #",
                              "##    #",
                              "# #   #",
                              "#  #  #",
                              "#  #  #",
                              "#   # #",
                              "#    ##",
                              "#     #");
                              
  letters['O'] = stringToByte("  ###  ",
                              " #   # ",
                              "#     #",
                              "#     #",
                              "#     #",
                              "#     #",
                              " #   # ",
                              "  ###  ");
                              
  letters['P'] = stringToByte("#####  ",
                              "#    # ",
                              "#     #",
                              "#    # ",
                              "####   ",
                              "#      ",
                              "#      ",
                              "#      ");
                              
  letters['Q'] = stringToByte("  ###  ",
                              " #   # ",
                              "#     #",
                              "#     #",
                              "#     #",
                              "#     #",
                              " #   # ",
                              "  ### #");
                              
  letters['R'] = stringToByte("#####  ",
                              "#    # ",
                              "#     #",
                              "#    # ",
                              "####   ",
                              "#   #  ",
                              "#    # ",
                              "#     #");
                              
  letters['S'] = stringToByte("  #####",
                              " #     " ,
                              "#      ",
                              " ####  ",
                              "     # ",
                              "      #",
                              "     # ",
                              "#####  ");
                              
  letters['T'] = stringToByte("#######",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ");
                            
  letters['U'] = stringToByte("#     #",
                              "#     #",
                              "#     #",
                              "#     #",
                              "#     #",
                              "#     #",
                              " #   # ",
                              "  ###  ");
                              
  letters['V'] = stringToByte("#     #",
                              "#     #",
                              " #   # ",
                              " #   #",
                              "  # #  ",
                              "  # #  ",
                              "   #   ",
                              "   #   ");
                              
  letters['W'] = stringToByte("#     #",
                              "#  #  #",
                              "#  #  #",
                              "#  #  #",
                              "#  #  #",
                              "#  #  #",
                              "# # # #",
                              " #   # ");
                              
  letters['X'] = stringToByte("#     #",
                              " #   # ",
                              "  # #  ",
                              "   #   ",
                              "   #   ",
                              "  # #  ",
                              " #   # ",
                              "#     #");
                              
  letters['Y'] = stringToByte("#     #",
                              " #   # ",
                              "  # #  ",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ",
                              "   #   ");
                              
  letters['Z'] = stringToByte("#######",
                              "     ##",
                              "    ## ",
                              "   ##  ",
                              "  ##   ",
                              " ##    ",
                              "##     ",
                              "#######");
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}
