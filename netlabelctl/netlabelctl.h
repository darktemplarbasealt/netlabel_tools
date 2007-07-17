/*
 * Header file for the NetLabel Control Utility
 *
 * Author: Paul Moore <paul.moore@hp.com>
 *
 */

/*
 * (c) Copyright Hewlett-Packard Development Company, L.P., 2006
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _NETLABELCTL_H
#define _NETLABELCTL_H

/* global program name */
extern char *nlctl_name;

/* global option variables */
extern uint32_t opt_verbose;
extern uint32_t opt_timeout;
extern uint32_t opt_pretty;

/* warning/error reporting */
#define MSG_WARN(_x) "%s: warning, "_x,nlctl_name
#define MSG_WARN_MOD(_m,_x) "%s: warning[%s], "_x,nlctl_name,_m
#define MSG_ERR(_x) "%s: error, "_x,nlctl_name
#define MSG_ERR_MOD(_m,_x) "%s: error[%s], "_x,nlctl_name,_m

/* message display */
#define MSG(_x) (opt_pretty?_x:"")
#define MSG_V(_x) (opt_verbose?_x"")

/* module entry points */
typedef int main_function_t(int argc, char *argv[]);
int mgmt_main(int argc, char *argv[]);
int map_main(int argc, char *argv[]);
int unlbl_main(int argc, char *argv[]);
int cipsov4_main(int argc, char *argv[]);

#endif
