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

#ifndef _XS_ELEMENTLIST_H_
#define _XS_ELEMENTLIST_H_

#include <xs/base.h>

class xsObject;

class xsElementList : public xsBase
{
public:
	xsElementList();
	~xsElementList();

	void add(xsObject *parent, xsArray *items);
	void add(xsObject *parent, xsObject *sub);
	xsObject *get(const char *id);
	xsObject *iterate(xsIterator *iter);
	xsObject *riterate(xsIterator *iter);
	void adopt(xsObject *parent);
	int count();
	void remove(const char *widId);
	void removeAll(xsBool destroy);

private:
	xsArrayList items;
};

#endif /* _XS_ELEMENTLIST_H_ */
