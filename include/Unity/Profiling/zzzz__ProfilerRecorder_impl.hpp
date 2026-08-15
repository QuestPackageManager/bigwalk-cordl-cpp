#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorder.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderSample_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions::ProfilerRecorder_ControlOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions::ProfilerRecorder_ControlOptions()   {
}
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions  Unity::Profiling::ProfilerRecorder_ControlOptions::Start{static_cast<int32_t>(0x0)};
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions  Unity::Profiling::ProfilerRecorder_ControlOptions::Stop{static_cast<int32_t>(0x1)};
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions  Unity::Profiling::ProfilerRecorder_ControlOptions::Reset{static_cast<int32_t>(0x2)};
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions  Unity::Profiling::ProfilerRecorder_ControlOptions::Release{static_cast<int32_t>(0x4)};
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions  Unity::Profiling::ProfilerRecorder_ControlOptions::SetFilterToCurrentThread{static_cast<int32_t>(0x5)};
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions  Unity::Profiling::ProfilerRecorder_ControlOptions::SetToCollectFromAllThreads{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorder_CountOptions::ProfilerRecorder_CountOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorder_CountOptions::ProfilerRecorder_CountOptions()   {
}
constexpr ::Unity::Profiling::ProfilerRecorder_CountOptions  Unity::Profiling::ProfilerRecorder_CountOptions::Count{static_cast<int32_t>(0x0)};
constexpr ::Unity::Profiling::ProfilerRecorder_CountOptions  Unity::Profiling::ProfilerRecorder_CountOptions::MaxCount{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, int32_t, ::Unity::Profiling::ProfilerRecorderOptions)>(&::Unity::Profiling::ProfilerRecorder::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182249580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorderOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_Valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_Valid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822496d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"get_Valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822494e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::Stop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182249530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_LastValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_LastValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182249680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"get_LastValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822495e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_IsRunning)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182249630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerRecorderSample (::Unity::Profiling::ProfilerRecorder::*)(int32_t)>(&::Unity::Profiling::ProfilerRecorder::GetSample)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182249420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetSample", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerRecorder (*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, int32_t, ::Unity::Profiling::ProfilerRecorderOptions)>(&::Unity::Profiling::ProfilerRecorder::Create)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822492d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Create", {}, {::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorderOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Control
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Profiling::ProfilerRecorder, ::Unity::Profiling::ProfilerRecorder_ControlOptions)>(&::Unity::Profiling::ProfilerRecorder::Control)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822492a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Control", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorder_ControlOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetLastValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Unity::Profiling::ProfilerRecorder)>(&::Unity::Profiling::ProfilerRecorder::GetLastValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182249380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetLastValue", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Profiling::ProfilerRecorder, ::Unity::Profiling::ProfilerRecorder_CountOptions)>(&::Unity::Profiling::ProfilerRecorder::GetCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182249350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetCount", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorder_CountOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Profiling::ProfilerRecorder)>(&::Unity::Profiling::ProfilerRecorder::GetValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822494c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetValid", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Profiling::ProfilerRecorder)>(&::Unity::Profiling::ProfilerRecorder::GetRunning)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822493b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetRunning", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetSampleInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerRecorderSample (*)(::Unity::Profiling::ProfilerRecorder, int32_t)>(&::Unity::Profiling::ProfilerRecorder::GetSampleInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822493e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetSampleInternal", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182249300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.CheckInitializedAndThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::CheckInitializedAndThrow)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182249260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"CheckInitializedAndThrow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Create_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>, int32_t, ::Unity::Profiling::ProfilerRecorderOptions, ::by_ref<::Unity::Profiling::ProfilerRecorder>)>(&::Unity::Profiling::ProfilerRecorder::Create_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822492c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Create_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorderOptions>(), ::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Control_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Profiling::ProfilerRecorder>, ::Unity::Profiling::ProfilerRecorder_ControlOptions)>(&::Unity::Profiling::ProfilerRecorder::Control_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182249290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Control_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorder_ControlOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetLastValue_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::by_ref<::Unity::Profiling::ProfilerRecorder>)>(&::Unity::Profiling::ProfilerRecorder::GetLastValue_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182249370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetLastValue_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Unity::Profiling::ProfilerRecorder>, ::Unity::Profiling::ProfilerRecorder_CountOptions)>(&::Unity::Profiling::ProfilerRecorder::GetCount_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182249340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetCount_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorder_CountOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetValid_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Profiling::ProfilerRecorder>)>(&::Unity::Profiling::ProfilerRecorder::GetValid_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822494b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetValid_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetRunning_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Profiling::ProfilerRecorder>)>(&::Unity::Profiling::ProfilerRecorder::GetRunning_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822493a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetRunning_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetSampleInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Profiling::ProfilerRecorder>, int32_t, ::by_ref<::Unity::Profiling::ProfilerRecorderSample>)>(&::Unity::Profiling::ProfilerRecorder::GetSampleInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822493d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetSampleInternal_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorderSample>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Profiling::ProfilerRecorder::_ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle  statHandle, int32_t  capacity, ::Unity::Profiling::ProfilerRecorderOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorderOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, statHandle, capacity, options);
}
inline bool Unity::Profiling::ProfilerRecorder::get_Valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"get_Valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int64_t Unity::Profiling::ProfilerRecorder::get_LastValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"get_LastValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int32_t Unity::Profiling::ProfilerRecorder::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Unity::Profiling::ProfilerRecorder::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerRecorderSample Unity::Profiling::ProfilerRecorder::GetSample(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetSample", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerRecorderSample>(*this, ___internal_method, index);
}
inline ::Unity::Profiling::ProfilerRecorder Unity::Profiling::ProfilerRecorder::Create(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle  statHandle, int32_t  maxSampleCount, ::Unity::Profiling::ProfilerRecorderOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Create", {}, {::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorderOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerRecorder>(nullptr, ___internal_method, statHandle, maxSampleCount, options);
}
inline void Unity::Profiling::ProfilerRecorder::Control(::Unity::Profiling::ProfilerRecorder  handle, ::Unity::Profiling::ProfilerRecorder_ControlOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Control", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorder_ControlOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, options);
}
inline int64_t Unity::Profiling::ProfilerRecorder::GetLastValue(::Unity::Profiling::ProfilerRecorder  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetLastValue", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, handle);
}
inline int32_t Unity::Profiling::ProfilerRecorder::GetCount(::Unity::Profiling::ProfilerRecorder  handle, ::Unity::Profiling::ProfilerRecorder_CountOptions  countOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetCount", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorder_CountOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, countOptions);
}
inline bool Unity::Profiling::ProfilerRecorder::GetValid(::Unity::Profiling::ProfilerRecorder  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetValid", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool Unity::Profiling::ProfilerRecorder::GetRunning(::Unity::Profiling::ProfilerRecorder  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetRunning", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::Unity::Profiling::ProfilerRecorderSample Unity::Profiling::ProfilerRecorder::GetSampleInternal(::Unity::Profiling::ProfilerRecorder  handle, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetSampleInternal", {}, {::i2c::type_of<::Unity::Profiling::ProfilerRecorder>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerRecorderSample>(nullptr, ___internal_method, handle, index);
}
inline void Unity::Profiling::ProfilerRecorder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::CheckInitializedAndThrow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"CheckInitializedAndThrow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::Create_Injected(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>  statHandle, int32_t  maxSampleCount, ::Unity::Profiling::ProfilerRecorderOptions  options, ::by_ref<::Unity::Profiling::ProfilerRecorder>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Create_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorderOptions>(), ::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, statHandle, maxSampleCount, options, ret);
}
inline void Unity::Profiling::ProfilerRecorder::Control_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle, ::Unity::Profiling::ProfilerRecorder_ControlOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"Control_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorder_ControlOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, options);
}
inline int64_t Unity::Profiling::ProfilerRecorder::GetLastValue_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetLastValue_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, handle);
}
inline int32_t Unity::Profiling::ProfilerRecorder::GetCount_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle, ::Unity::Profiling::ProfilerRecorder_CountOptions  countOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetCount_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>(), ::i2c::type_of<::Unity::Profiling::ProfilerRecorder_CountOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, countOptions);
}
inline bool Unity::Profiling::ProfilerRecorder::GetValid_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetValid_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool Unity::Profiling::ProfilerRecorder::GetRunning_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetRunning_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline void Unity::Profiling::ProfilerRecorder::GetSampleInternal_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle, int32_t  index, ::by_ref<::Unity::Profiling::ProfilerRecorderSample>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::ProfilerRecorder>(),
                        {"GetSampleInternal_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorderSample>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, index, ret);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::Profiling::ProfilerRecorder::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Profiling::ProfilerRecorder::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorder::ProfilerRecorder(uint64_t  handle) noexcept  {
this->handle = handle;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorder::ProfilerRecorder()   {
}
constexpr ::Unity::Profiling::ProfilerRecorderOptions  Unity::Profiling::ProfilerRecorder::SharedRecorder{static_cast<int32_t>(0x80)};
