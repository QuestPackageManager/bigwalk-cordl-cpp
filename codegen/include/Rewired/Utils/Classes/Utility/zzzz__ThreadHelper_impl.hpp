#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ThreadHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__ThreadHelper_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__Stopwatch_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Utility::ThreadHelper* (*)(bool, int32_t, bool, int32_t)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::Create)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18193baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Create", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.CreateFixedTimeStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Utility::ThreadHelper* (*)(int32_t, int32_t)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::CreateFixedTimeStep)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193ba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"CreateFixedTimeStep", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.CreateFixedTimeStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Utility::ThreadHelper* (*)(int32_t, bool, int32_t)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::CreateFixedTimeStep)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193b9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"CreateFixedTimeStep", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.get_isRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::get_isRunning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_isRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.get_isStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::get_isStopped)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18193cba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_isStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.get_useHighPrecitionTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::get_useHighPrecitionTimer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18193cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_useHighPrecitionTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.set_useHighPrecitionTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(bool)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::set_useHighPrecitionTimer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18193ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"set_useHighPrecitionTimer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.get_useFixedTimeStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::get_useFixedTimeStep)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_useFixedTimeStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.get_fixedTimeStepFPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::get_fixedTimeStepFPS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_fixedTimeStepFPS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.set_fixedTimeStepFPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(int32_t)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::set_fixedTimeStepFPS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18193cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"set_fixedTimeStepFPS", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.get_timeoutMS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::get_timeoutMS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_timeoutMS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.set_timeoutMS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(int32_t)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::set_timeoutMS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18193ccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"set_timeoutMS", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.get_tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::get_tick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.add_ThreadUpdateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::add_ThreadUpdateEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"add_ThreadUpdateEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.remove_ThreadUpdateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::remove_ThreadUpdateEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"remove_ThreadUpdateEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.ICeeiyblRzpQuEjPfszXIiWEnlkkE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::ICeeiyblRzpQuEjPfszXIiWEnlkkE)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803456c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"ICeeiyblRzpQuEjPfszXIiWEnlkkE", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.uRMOYRVhlMMgPxPgezfHEKwdujWC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::uRMOYRVhlMMgPxPgezfHEKwdujWC)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"uRMOYRVhlMMgPxPgezfHEKwdujWC", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.add_ThreadStartedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::add_ThreadStartedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803456c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"add_ThreadStartedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.remove_ThreadStartedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::remove_ThreadStartedEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"remove_ThreadStartedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.nxfaCpjcjrnukUuCnguNxOQQvvZCA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::nxfaCpjcjrnukUuCnguNxOQQvvZCA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803457e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"nxfaCpjcjrnukUuCnguNxOQQvvZCA", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.fDPZBOyDHESTZMphtGyhDstNnYFC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::fDPZBOyDHESTZMphtGyhDstNnYFC)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"fDPZBOyDHESTZMphtGyhDstNnYFC", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.add_ThreadPreStopEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::add_ThreadPreStopEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803457e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"add_ThreadPreStopEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.remove_ThreadPreStopEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::remove_ThreadPreStopEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"remove_ThreadPreStopEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18193c990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(int32_t)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18193c9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(int32_t, bool, int32_t)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18193c800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(bool)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::Start)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18193c430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Start", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(bool)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::Stop)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18193c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Stop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.EnqueueAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::EnqueueAction)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18193c260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"EnqueueAction", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.InvokeActionSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(::System::Action*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::InvokeActionSync)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18193c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"InvokeActionSync", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.WaitForActionQueueToFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::WaitForActionQueueToFinish)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18193c640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"WaitForActionQueueToFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.ResetTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::ResetTimeout)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193c3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"ResetTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.ElTlwZeAyhiHhTfLfwpXWTExSnqW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::ElTlwZeAyhiHhTfLfwpXWTExSnqW)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x18193bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"ElTlwZeAyhiHhTfLfwpXWTExSnqW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.xjoCUjxLsnlGELCkKoHpkCNRTkYB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::xjoCUjxLsnlGELCkKoHpkCNRTkYB)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18193cd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"xjoCUjxLsnlGELCkKoHpkCNRTkYB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.dzjBhfzKHQecFDDvNahNjwtAOtIub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::dzjBhfzKHQecFDDvNahNjwtAOtIub)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18193caf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"dzjBhfzKHQecFDDvNahNjwtAOtIub", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.apbLKCgoZvCXkcXOGMaqaeFWWAcy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::apbLKCgoZvCXkcXOGMaqaeFWWAcy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193ca60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"apbLKCgoZvCXkcXOGMaqaeFWWAcy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18193bc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)()>(&::Rewired::Utils::Classes::Utility::ThreadHelper::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18193c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::ThreadHelper::*)(bool)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::Dispose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18193bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::ThreadHelper.PLyumRfOMajDafKiLgvtpcFbhfTl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Rewired::Utils::Classes::Utility::ThreadHelper::PLyumRfOMajDafKiLgvtpcFbhfTl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18193c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"PLyumRfOMajDafKiLgvtpcFbhfTl", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Utility::Stopwatch*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_TFwyfoliZRCzeOjqlUBOCiKhcUhP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TFwyfoliZRCzeOjqlUBOCiKhcUhP;
}
constexpr ::Rewired::Utils::Classes::Utility::Stopwatch* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_TFwyfoliZRCzeOjqlUBOCiKhcUhP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TFwyfoliZRCzeOjqlUBOCiKhcUhP;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_TFwyfoliZRCzeOjqlUBOCiKhcUhP(::Rewired::Utils::Classes::Utility::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TFwyfoliZRCzeOjqlUBOCiKhcUhP = value;
}
constexpr ::System::Threading::Thread*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_FocOTLwYmLaqgFlbOXxBnrjhIbmA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocOTLwYmLaqgFlbOXxBnrjhIbmA;
}
constexpr ::System::Threading::Thread* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_FocOTLwYmLaqgFlbOXxBnrjhIbmA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocOTLwYmLaqgFlbOXxBnrjhIbmA;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_FocOTLwYmLaqgFlbOXxBnrjhIbmA(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FocOTLwYmLaqgFlbOXxBnrjhIbmA = value;
}
constexpr ::System::Threading::ManualResetEvent*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_SxTnEvVFvXVZBDcSrAwlYRkRihxS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SxTnEvVFvXVZBDcSrAwlYRkRihxS;
}
constexpr ::System::Threading::ManualResetEvent* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_SxTnEvVFvXVZBDcSrAwlYRkRihxS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SxTnEvVFvXVZBDcSrAwlYRkRihxS;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_SxTnEvVFvXVZBDcSrAwlYRkRihxS(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SxTnEvVFvXVZBDcSrAwlYRkRihxS = value;
}
constexpr ::System::Threading::ManualResetEvent*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_iVRzuojxBXpSvxFBKhCIowWAAyhR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iVRzuojxBXpSvxFBKhCIowWAAyhR;
}
constexpr ::System::Threading::ManualResetEvent* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_iVRzuojxBXpSvxFBKhCIowWAAyhR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iVRzuojxBXpSvxFBKhCIowWAAyhR;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_iVRzuojxBXpSvxFBKhCIowWAAyhR(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iVRzuojxBXpSvxFBKhCIowWAAyhR = value;
}
constexpr ::System::Threading::AutoResetEvent*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_sQJrQeUbrmkBZilpkJJnKWVNpbhm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sQJrQeUbrmkBZilpkJJnKWVNpbhm;
}
constexpr ::System::Threading::AutoResetEvent* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_sQJrQeUbrmkBZilpkJJnKWVNpbhm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sQJrQeUbrmkBZilpkJJnKWVNpbhm;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_sQJrQeUbrmkBZilpkJJnKWVNpbhm(::System::Threading::AutoResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sQJrQeUbrmkBZilpkJJnKWVNpbhm = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_thocaeBHambMaWKmwnilxWwwzWXc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thocaeBHambMaWKmwnilxWwwzWXc;
}
constexpr bool const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_thocaeBHambMaWKmwnilxWwwzWXc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thocaeBHambMaWKmwnilxWwwzWXc;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_thocaeBHambMaWKmwnilxWwwzWXc(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thocaeBHambMaWKmwnilxWwwzWXc = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_rvcbJSEheDJVvrYbMmdegoRBPEFM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rvcbJSEheDJVvrYbMmdegoRBPEFM;
}
constexpr bool const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_rvcbJSEheDJVvrYbMmdegoRBPEFM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rvcbJSEheDJVvrYbMmdegoRBPEFM;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_rvcbJSEheDJVvrYbMmdegoRBPEFM(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rvcbJSEheDJVvrYbMmdegoRBPEFM = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_sypyOAsFGVBhDssAnVNPQjAGLczX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sypyOAsFGVBhDssAnVNPQjAGLczX;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_sypyOAsFGVBhDssAnVNPQjAGLczX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sypyOAsFGVBhDssAnVNPQjAGLczX;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_sypyOAsFGVBhDssAnVNPQjAGLczX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sypyOAsFGVBhDssAnVNPQjAGLczX = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_mvQbjHRONLGwLOmEgDiczUnPJagK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mvQbjHRONLGwLOmEgDiczUnPJagK;
}
constexpr bool const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_mvQbjHRONLGwLOmEgDiczUnPJagK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mvQbjHRONLGwLOmEgDiczUnPJagK;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_mvQbjHRONLGwLOmEgDiczUnPJagK(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mvQbjHRONLGwLOmEgDiczUnPJagK = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_qKYYkiDLDkuMgRGEZfoODtxZGNip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qKYYkiDLDkuMgRGEZfoODtxZGNip;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_qKYYkiDLDkuMgRGEZfoODtxZGNip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qKYYkiDLDkuMgRGEZfoODtxZGNip;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_qKYYkiDLDkuMgRGEZfoODtxZGNip(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qKYYkiDLDkuMgRGEZfoODtxZGNip = value;
}
constexpr int64_t& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_ZQvBsLNiblwDkZcGhuXdalfqLgGF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZQvBsLNiblwDkZcGhuXdalfqLgGF;
}
constexpr int64_t const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_ZQvBsLNiblwDkZcGhuXdalfqLgGF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZQvBsLNiblwDkZcGhuXdalfqLgGF;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_ZQvBsLNiblwDkZcGhuXdalfqLgGF(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZQvBsLNiblwDkZcGhuXdalfqLgGF = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_GoGoxNJMcFRAprZMXtYoSnzTghpu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoGoxNJMcFRAprZMXtYoSnzTghpu;
}
constexpr bool const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_GoGoxNJMcFRAprZMXtYoSnzTghpu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoGoxNJMcFRAprZMXtYoSnzTghpu;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_GoGoxNJMcFRAprZMXtYoSnzTghpu(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoGoxNJMcFRAprZMXtYoSnzTghpu = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_cjqQyZzSEVtGIREOwqEqCKMuCdzK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cjqQyZzSEVtGIREOwqEqCKMuCdzK;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_cjqQyZzSEVtGIREOwqEqCKMuCdzK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cjqQyZzSEVtGIREOwqEqCKMuCdzK;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_cjqQyZzSEVtGIREOwqEqCKMuCdzK(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cjqQyZzSEVtGIREOwqEqCKMuCdzK = value;
}
constexpr int64_t& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_ShyyrabyYkIhZjwZmoEsMGqOKKDG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShyyrabyYkIhZjwZmoEsMGqOKKDG;
}
constexpr int64_t const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_ShyyrabyYkIhZjwZmoEsMGqOKKDG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShyyrabyYkIhZjwZmoEsMGqOKKDG;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_ShyyrabyYkIhZjwZmoEsMGqOKKDG(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShyyrabyYkIhZjwZmoEsMGqOKKDG = value;
}
constexpr uint32_t& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_ICUcMXDstmTeuTdGLlSZAoJjBxlj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ICUcMXDstmTeuTdGLlSZAoJjBxlj;
}
constexpr uint32_t const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_ICUcMXDstmTeuTdGLlSZAoJjBxlj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ICUcMXDstmTeuTdGLlSZAoJjBxlj;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_ICUcMXDstmTeuTdGLlSZAoJjBxlj(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ICUcMXDstmTeuTdGLlSZAoJjBxlj = value;
}
constexpr ::System::Object*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_TtRVIPgeGhKgDDsqcXTgkupimnMD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TtRVIPgeGhKgDDsqcXTgkupimnMD;
}
constexpr ::System::Object* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_TtRVIPgeGhKgDDsqcXTgkupimnMD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TtRVIPgeGhKgDDsqcXTgkupimnMD;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_TtRVIPgeGhKgDDsqcXTgkupimnMD(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TtRVIPgeGhKgDDsqcXTgkupimnMD = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_MZFQWQozfOVUrDwfDacnseNbOHZp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MZFQWQozfOVUrDwfDacnseNbOHZp;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_MZFQWQozfOVUrDwfDacnseNbOHZp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MZFQWQozfOVUrDwfDacnseNbOHZp;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_MZFQWQozfOVUrDwfDacnseNbOHZp(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MZFQWQozfOVUrDwfDacnseNbOHZp = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_NSUGhlftdNfJtHGVelePVXVQktdN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NSUGhlftdNfJtHGVelePVXVQktdN;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Action*>* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_NSUGhlftdNfJtHGVelePVXVQktdN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NSUGhlftdNfJtHGVelePVXVQktdN;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_NSUGhlftdNfJtHGVelePVXVQktdN(::System::Collections::Generic::Queue_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NSUGhlftdNfJtHGVelePVXVQktdN = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_vUHvOOHhdzGGndZNOBGeBjtDesXS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vUHvOOHhdzGGndZNOBGeBjtDesXS;
}
constexpr bool const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_vUHvOOHhdzGGndZNOBGeBjtDesXS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vUHvOOHhdzGGndZNOBGeBjtDesXS;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_vUHvOOHhdzGGndZNOBGeBjtDesXS(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vUHvOOHhdzGGndZNOBGeBjtDesXS = value;
}
constexpr ::System::Action*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_GdBDayfHSXGwvXaejfJMKomHuXlV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GdBDayfHSXGwvXaejfJMKomHuXlV;
}
constexpr ::System::Action* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_GdBDayfHSXGwvXaejfJMKomHuXlV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GdBDayfHSXGwvXaejfJMKomHuXlV;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_GdBDayfHSXGwvXaejfJMKomHuXlV(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GdBDayfHSXGwvXaejfJMKomHuXlV = value;
}
constexpr ::System::Action*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_TGEFcshiKsJPLUFtpezGArRNanKv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TGEFcshiKsJPLUFtpezGArRNanKv;
}
constexpr ::System::Action* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_TGEFcshiKsJPLUFtpezGArRNanKv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TGEFcshiKsJPLUFtpezGArRNanKv;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_TGEFcshiKsJPLUFtpezGArRNanKv(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TGEFcshiKsJPLUFtpezGArRNanKv = value;
}
constexpr ::System::Action*& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_ZBudPWbdzcaeGbntKpnkiaTIJBsPb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZBudPWbdzcaeGbntKpnkiaTIJBsPb;
}
constexpr ::System::Action* const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_ZBudPWbdzcaeGbntKpnkiaTIJBsPb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZBudPWbdzcaeGbntKpnkiaTIJBsPb;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_ZBudPWbdzcaeGbntKpnkiaTIJBsPb(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZBudPWbdzcaeGbntKpnkiaTIJBsPb = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_xHYHuPcLcuIsUABxBMkejNujelHXA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xHYHuPcLcuIsUABxBMkejNujelHXA;
}
constexpr bool const& Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_get_xHYHuPcLcuIsUABxBMkejNujelHXA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xHYHuPcLcuIsUABxBMkejNujelHXA;
}
constexpr void Rewired::Utils::Classes::Utility::ThreadHelper::__cordl_internal_set_xHYHuPcLcuIsUABxBMkejNujelHXA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xHYHuPcLcuIsUABxBMkejNujelHXA = value;
}
inline ::Rewired::Utils::Classes::Utility::ThreadHelper* Rewired::Utils::Classes::Utility::ThreadHelper::Create(bool  fixedTimeStep, int32_t  fixedTimeStepFPS, bool  useHighPrecisionTimer, int32_t  timeoutMS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Create", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Utility::ThreadHelper*>(nullptr, ___internal_method, fixedTimeStep, fixedTimeStepFPS, useHighPrecisionTimer, timeoutMS);
}
inline ::Rewired::Utils::Classes::Utility::ThreadHelper* Rewired::Utils::Classes::Utility::ThreadHelper::CreateFixedTimeStep(int32_t  timeStepFPS, int32_t  timeoutMS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"CreateFixedTimeStep", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Utility::ThreadHelper*>(nullptr, ___internal_method, timeStepFPS, timeoutMS);
}
inline ::Rewired::Utils::Classes::Utility::ThreadHelper* Rewired::Utils::Classes::Utility::ThreadHelper::CreateFixedTimeStep(int32_t  timeStepFPS, bool  useHighPrecisionTimer, int32_t  timeoutMS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"CreateFixedTimeStep", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Utility::ThreadHelper*>(nullptr, ___internal_method, timeStepFPS, useHighPrecisionTimer, timeoutMS);
}
inline bool Rewired::Utils::Classes::Utility::ThreadHelper::get_isRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_isRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Utility::ThreadHelper::get_isStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_isStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Utility::ThreadHelper::get_useHighPrecitionTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_useHighPrecitionTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::set_useHighPrecitionTimer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"set_useHighPrecitionTimer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Utils::Classes::Utility::ThreadHelper::get_useFixedTimeStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_useFixedTimeStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Utility::ThreadHelper::get_fixedTimeStepFPS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_fixedTimeStepFPS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::set_fixedTimeStepFPS(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"set_fixedTimeStepFPS", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Utils::Classes::Utility::ThreadHelper::get_timeoutMS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_timeoutMS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::set_timeoutMS(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"set_timeoutMS", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Rewired::Utils::Classes::Utility::ThreadHelper::get_tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"get_tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::add_ThreadUpdateEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"add_ThreadUpdateEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::remove_ThreadUpdateEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"remove_ThreadUpdateEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::ICeeiyblRzpQuEjPfszXIiWEnlkkE(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"ICeeiyblRzpQuEjPfszXIiWEnlkkE", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::uRMOYRVhlMMgPxPgezfHEKwdujWC(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"uRMOYRVhlMMgPxPgezfHEKwdujWC", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::add_ThreadStartedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"add_ThreadStartedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::remove_ThreadStartedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"remove_ThreadStartedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::nxfaCpjcjrnukUuCnguNxOQQvvZCA(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"nxfaCpjcjrnukUuCnguNxOQQvvZCA", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::fDPZBOyDHESTZMphtGyhDstNnYFC(::System::Action*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"fDPZBOyDHESTZMphtGyhDstNnYFC", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::add_ThreadPreStopEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"add_ThreadPreStopEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::remove_ThreadPreStopEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"remove_ThreadPreStopEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::Utils::Classes::Utility::ThreadHelper::Start(bool  wait)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Start", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, wait);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::Stop(bool  wait)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Stop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wait);
}
inline bool Rewired::Utils::Classes::Utility::ThreadHelper::EnqueueAction(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"EnqueueAction", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline bool Rewired::Utils::Classes::Utility::ThreadHelper::InvokeActionSync(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"InvokeActionSync", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::WaitForActionQueueToFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"WaitForActionQueueToFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::ResetTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"ResetTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::ElTlwZeAyhiHhTfLfwpXWTExSnqW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"ElTlwZeAyhiHhTfLfwpXWTExSnqW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::xjoCUjxLsnlGELCkKoHpkCNRTkYB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"xjoCUjxLsnlGELCkKoHpkCNRTkYB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::dzjBhfzKHQecFDDvNahNjwtAOtIub()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"dzjBhfzKHQecFDDvNahNjwtAOtIub", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::apbLKCgoZvCXkcXOGMaqaeFWWAcy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"apbLKCgoZvCXkcXOGMaqaeFWWAcy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Rewired::Utils::Classes::Utility::ThreadHelper::PLyumRfOMajDafKiLgvtpcFbhfTl(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::ThreadHelper*>(),
                        {"PLyumRfOMajDafKiLgvtpcFbhfTl", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Classes::Utility::ThreadHelper* Rewired::Utils::Classes::Utility::ThreadHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::ThreadHelper*>());
}
inline ::Rewired::Utils::Classes::Utility::ThreadHelper* Rewired::Utils::Classes::Utility::ThreadHelper::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::ThreadHelper*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::Utils::Classes::Utility::ThreadHelper* Rewired::Utils::Classes::Utility::ThreadHelper::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::ThreadHelper*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::ThreadHelper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::ThreadHelper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Utility::ThreadHelper::ThreadHelper()   {
}
