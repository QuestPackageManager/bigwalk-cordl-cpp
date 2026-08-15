#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Rewired/Utils/Classes/Utility/DualThreadLowLevelInputEventQueue.hpp"
#include "Rewired/Utils/Classes/Utility/EnumNameValueCache_1.hpp"
#include "Rewired/Utils/Classes/Utility/FrameTimer.hpp"
#include "Rewired/Utils/Classes/Utility/IObjectPool.hpp"
#include "Rewired/Utils/Classes/Utility/IObjectPool_1.hpp"
#include "Rewired/Utils/Classes/Utility/IPoolableObject_Internal.hpp"
#include "Rewired/Utils/Classes/Utility/LockedObject_1.hpp"
#include "Rewired/Utils/Classes/Utility/Locker.hpp"
#include "Rewired/Utils/Classes/Utility/LowLevelInputEventQueue.hpp"
#include "Rewired/Utils/Classes/Utility/ObjectInstanceTracker.hpp"
#include "Rewired/Utils/Classes/Utility/ObjectPool_1.hpp"
#include "Rewired/Utils/Classes/Utility/PinnedGCHandle.hpp"
#include "Rewired/Utils/Classes/Utility/SetAndRestoreVar_1.hpp"
#include "Rewired/Utils/Classes/Utility/SpinLock.hpp"
#include "Rewired/Utils/Classes/Utility/Stopwatch.hpp"
#include "Rewired/Utils/Classes/Utility/StopwatchBase.hpp"
#include "Rewired/Utils/Classes/Utility/ThreadHelper.hpp"
#include "Rewired/Utils/Classes/Utility/ThreadSafeObjectPool_1.hpp"
#include "Rewired/Utils/Classes/Utility/ThreadedMessageQueue_1.hpp"
#include "Rewired/Utils/Classes/Utility/Timer.hpp"
#include "Rewired/Utils/Classes/Utility/TimerAbs.hpp"
#include "Rewired/Utils/Classes/Utility/TimerRealTime.hpp"
#include "Rewired/Utils/Classes/Utility/UnityStopwatch.hpp"
#include "Rewired/Utils/Classes/Utility/ValueWatcher.hpp"
#include "Rewired/Utils/Classes/Utility/ValueWatcher_1.hpp"
#ifdef __cpp_modules
                    export module Utility;
                    #endif
                
