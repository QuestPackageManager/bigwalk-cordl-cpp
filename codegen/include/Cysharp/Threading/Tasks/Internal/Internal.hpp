#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Cysharp/Threading/Tasks/Internal/ArrayPoolUtil.hpp"
#include "Cysharp/Threading/Tasks/Internal/ArrayPool_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/ArrayUtil.hpp"
#include "Cysharp/Threading/Tasks/Internal/AsyncSubject_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/ContinuationQueue.hpp"
#include "Cysharp/Threading/Tasks/Internal/DiagnosticsExtensions.hpp"
#include "Cysharp/Threading/Tasks/Internal/DisposedObserver_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/EmptyDisposable.hpp"
#include "Cysharp/Threading/Tasks/Internal/EmptyObserver_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/Error.hpp"
#include "Cysharp/Threading/Tasks/Internal/ImmutableList_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/ListObserver_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/MinimumQueue_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/PlayerLoopRunner.hpp"
#include "Cysharp/Threading/Tasks/Internal/PooledDelegate_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/RuntimeHelpersAbstraction.hpp"
#include "Cysharp/Threading/Tasks/Internal/SingleAssignmentDisposable.hpp"
#include "Cysharp/Threading/Tasks/Internal/StatePool_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/StatePool_2.hpp"
#include "Cysharp/Threading/Tasks/Internal/StatePool_3.hpp"
#include "Cysharp/Threading/Tasks/Internal/StateTuple.hpp"
#include "Cysharp/Threading/Tasks/Internal/StateTuple_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/StateTuple_2.hpp"
#include "Cysharp/Threading/Tasks/Internal/StateTuple_3.hpp"
#include "Cysharp/Threading/Tasks/Internal/ThrowObserver_1.hpp"
#include "Cysharp/Threading/Tasks/Internal/UnityEqualityComparer.hpp"
#include "Cysharp/Threading/Tasks/Internal/UnityWebRequestResultExtensions.hpp"
#include "Cysharp/Threading/Tasks/Internal/ValueStopwatch.hpp"
#include "Cysharp/Threading/Tasks/Internal/WeakDictionary_2.hpp"
#ifdef __cpp_modules
                    export module Internal;
                    #endif
                
