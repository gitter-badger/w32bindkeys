/******************************************************************************
  This file is part of w32bindkeys.

  Copyright 2020 Richard Paul Baeck <richard.baeck@mailbox.org>

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*******************************************************************************/

/**
 * @author Richard B�ck
 * @date 2020-02-26
 * @brief File contains the key binding system command class definition
 */

#include "kc.h"

#ifndef WBK_KC_SYS_H
#define WBK_KC_SYS_H

typedef struct wbk_kc_sys_s
{
	wbk_kc_t *kc;

	char *cmd;
} wbk_kc_sys_t;

/**
 * @brief Creates a new key binding system command
 * @param comb The binding of the key command. The object will be freed by the key binding.
 * @param cmd The system command of the key command. The passed string will be freed by the key binding.
 * @return A new key binding command or NULL if allocation failed
 */
extern wbk_kc_sys_t *
wbk_kc_sys_new(wbk_b_t *comb, char *cmd);

/**
 * @brief Frees a key binding system command
 * @return Non-0 if the freeing failed
 */
extern int
wbk_kc_sys_free(wbk_kc_sys_t *kc);

/**
 * @brief Gets the combinations of a key binding system command.
 * @return The combinations of a key binding system command. It is an array of wbk_b_t.
 */
extern const wbk_b_t *
wbk_kc_sys_get_binding(const wbk_kc_sys_t *kc);

/**
 * @brief Gets the command of a key binding system command.
 * @return The command of a key binding system command.
 */
extern const char *
wbk_kc_sys_get_cmd(const wbk_kc_sys_t *kc_sys);

/**
 * @brief Execute the system command of a key binding system command
 * @return Non-0 if the execution failed
 */
extern int
wbk_kc_sys_exec(const wbk_kc_sys_t *kc_sys);

#endif // WBK_KC_SYS_H
