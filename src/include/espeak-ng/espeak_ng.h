/* eSpeak NG API.
 *
 * Copyright (C) 2015 Reece H. Dunn
 *
 * This file is part of espeak-ng.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ESPEAK_NG_H
#define ESPEAK_NG_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef __WIN32__
#define ESPEAK_NG_API __declspec(dllexport)
#else
#define ESPEAK_NG_API
#endif

typedef enum {
	/* Success Codes (>= 0) */

	ENS_OK = 0,

	/* Error Codes (< 0) */

	ENE_NOT_FOUND = -1,
	ENE_WRITE_FAILED = -2,
} espeak_ng_STATUS;

ESPEAK_NG_API espeak_ng_STATUS
espeak_ng_CompileMbrolaVoice(const char *path, FILE *log);

#ifdef __cplusplus
}
#endif

#endif