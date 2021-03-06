/*
 * Copyright (C) 2015 Focalcrest, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _XS_CORE_H_
#define _XS_CORE_H_

#include <xs/event.h>

#define XS_DYNAMIC_APP  //dynamic load
#ifdef __cplusplus
extern "C" {
#endif

typedef void *xsHandle;

int xsCoreInit();
void xsCoreUninit();

#ifdef __cplusplus
}
#endif

#endif /* _XS_CORE_H_ */
