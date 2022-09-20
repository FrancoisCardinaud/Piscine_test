# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtorres- <rtorres-@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/05 14:50:13 by rtorres-          #+#    #+#              #
#    Updated: 2022/09/12 10:53:52 by fcardina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

FT_LINE2=$FT_LINE2+1
FT_DIFF=$(($FT_LINE2-$FT_LINE1))
 
cat -e /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | awk -F : '{ print $1 }' | rev | tail -r | awk -v ln1=$FT_LINE1 -v ln2=$FT_LINE2 'NR >= ln1 && NR <= ln2' | awk '{ printf $0", " }' | sed 's/.\{2\}$/./'
