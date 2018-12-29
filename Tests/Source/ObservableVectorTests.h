/*
    Copyright (c) 2018 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#ifndef _ISHIKO_COLLECTIONS_TESTS_OBSERVABLEVECTORTESTS_H_
#define _ISHIKO_COLLECTIONS_TESTS_OBSERVABLEVECTORTESTS_H_

#include "Ishiko/TestFramework/TestFrameworkCore.h"
#include "Ishiko/Collections/ObservableVector.h"

class ObservableVectorTests
{
public:
    static void AddTests(Ishiko::TestFramework::TestHarness& theTestHarness);

private:
    static Ishiko::TestFramework::TestResult::EOutcome CreationTest1();
    static Ishiko::TestFramework::TestResult::EOutcome PushBackTest1();
    static Ishiko::TestFramework::TestResult::EOutcome PushBackTest2();
    static Ishiko::TestFramework::TestResult::EOutcome PushBackTest3();
};

class IntVectorObserver : public Ishiko::Collections::ObservableVector<int>::Observer
{
public:
    void onElementAdded(size_t pos, const int& value) override;

    std::vector<std::pair<size_t, int>> m_additions;
};

#endif
