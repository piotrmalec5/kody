#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury_pole.py
#  
#  Copyright 2020  <>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  


def main(args):
    bok1=input("Podaj 1 bok: ")
    bok2=input("Podaj 2 bok: ")
    print("Obwód: ", 2 * int(bok1) + 2 * int(bok2))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
