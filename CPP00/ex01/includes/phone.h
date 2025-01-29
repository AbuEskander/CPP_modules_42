/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abueskander <abueskander@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 21:23:41 by abueskander       #+#    #+#             */
/*   Updated: 2025/01/29 08:45:48 by abueskander      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_H
#define PHONE_H

#include <string>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#define FAIL 1
#define SUCCESS 0

enum inputStates
{
        FIRSTNAME,
        LASTNAME,
        NICKNAME,
        SECERT
};

void check_eof();

#endif