#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ILodInput.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportWaveDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsHeight_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ILodInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::ILodInput::Draw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::ILodInput::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::ILodInput::Filter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_Enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_IsCompute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_Queue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_Pass)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_Rect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_Component)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_HeightReporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IReportsHeight* (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_HeightReporter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_DisplacementReporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IReportsDisplacement* (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_DisplacementReporter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_WaveDisplacementReporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IReportWaveDisplacement* (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_WaveDisplacementReporter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::ILodInput::*)()>(&::WaveHarmonic::Crest::ILodInput::get_Order)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1825594a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.Attach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::ILodInput*, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*)>(&::WaveHarmonic::Crest::ILodInput::Attach)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182559410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                        {"Attach", {}, {::i2c::type_of<::WaveHarmonic::Crest::ILodInput*>(), ::i2c::type_of<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ILodInput.Detach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::ILodInput*, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*)>(&::WaveHarmonic::Crest::ILodInput::Detach)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182559470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(),
                        {"Detach", {}, {::i2c::type_of<::WaveHarmonic::Crest::ILodInput*>(), ::i2c::type_of<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::ILodInput::Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulation, buffer, target, pass, weight, slice);
}
inline float_t WaveHarmonic::Crest::ILodInput::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline bool WaveHarmonic::Crest::ILodInput::get_Enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ILodInput::get_IsCompute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ILodInput::get_Queue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ILodInput::get_Pass()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::ILodInput::get_Rect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::ILodInput::get_Component()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IReportsHeight* WaveHarmonic::Crest::ILodInput::get_HeightReporter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IReportsHeight*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IReportsDisplacement* WaveHarmonic::Crest::ILodInput::get_DisplacementReporter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IReportsDisplacement*>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IReportWaveDisplacement* WaveHarmonic::Crest::ILodInput::get_WaveDisplacementReporter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IReportWaveDisplacement*>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::ILodInput::get_Order()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ILodInput*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ILodInput::Attach(::WaveHarmonic::Crest::ILodInput*  input, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  inputs)  {
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, inputs);
}
inline void WaveHarmonic::Crest::ILodInput::Detach(::WaveHarmonic::Crest::ILodInput*  input, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  inputs)  {
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, inputs);
}
