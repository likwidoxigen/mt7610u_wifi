/*
 *************************************************************************
 * Ralink Tech Inc.
 * 5F., No.36, Taiyuan St., Jhubei City,
 * Hsinchu County 302,
 * Taiwan, R.O.C.
 *
 * (c) Copyright 2002-2010, Ralink Technology, Inc.
 *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                       *
 *************************************************************************/


#define RTMP_MODULE_OS

/*#include "rt_config.h"*/
#include "rtmp_comm.h"
#include "rt_os_util.h"
#include "rt_os_net.h"


/* module table */
USB_DEVICE_ID rtusb_dev_id[] = {
#ifdef MT76x0
    /* added device ids from https://wikidevi.com/wiki/MediaTek_MT7610U */
	{USB_DEVICE(0x148F,0x7610)}, /*  MT7610U                            */
	{USB_DEVICE(0x148F,0x6570)}, /*  MT6570                             */
	{USB_DEVICE(0x148F,0x6530)}, /*  MT6370                             */
	{USB_DEVICE(0x0E8D,0x7610)}, /*  MT7610U                            */
	{USB_DEVICE(0x0E8D,0x7650)}, /*  MT7650U                            */
	{USB_DEVICE(0x7392,0xA711)}, /*  Edimax EW-7711ULC                  */
    {USB_DEVICE(0x7392,0xB711)}, /*  (Edimax)                           */
    {USB_DEVICE(0x148F,0x761A)}, /*  TP-LINK TL-WDN5200/ARCHER T2UH     */
    {USB_DEVICE(0x148F,0x760A)}, /*  (TP-LINK)                          */
    {USB_DEVICE(0x0B05,0x17DB)}, /*  (ASUS USB-AC50)                    */
	{USB_DEVICE(0x0B05,0x17D1)}, /*  (ASUS USB-AC51)                    */
    {USB_DEVICE(0x0DF6,0x0075)}, /*  Sitecom WLA-3100                   */
    {USB_DEVICE(0x2019,0xAB31)}, /*  (Planex GW-450D)                   */
    {USB_DEVICE(0x2001,0x3D02)}, /*  (D-Link DWA-171 rev B1)            */
    {USB_DEVICE(0x0586,0x3425)}, /*  (ZyXEL) ZyXEL NWD6505              */
    {USB_DEVICE(0x07B8,0x7610)}, /*  (AboCom) AboCom AU7212             */
    {USB_DEVICE(0x04BB,0x0951)}, /*  (I-O DATA WN-AC433UK)              */
    {USB_DEVICE(0x13B1,0x003E)}, /*  (Linksys AE6000)                   */

	{USB_DEVICE_AND_INTERFACE_INFO(0x0E8D, 0x7630, 0xff, 0x2, 0xff)}, /* MT7630U */
	{USB_DEVICE_AND_INTERFACE_INFO(0x0E8D, 0x7650, 0xff, 0x2, 0xff)}, /* MT7650U */
#endif
	{ }/* Terminating entry */
};

INT const rtusb_usb_id_len = sizeof(rtusb_dev_id) / sizeof(USB_DEVICE_ID);
MODULE_DEVICE_TABLE(usb, rtusb_dev_id);
