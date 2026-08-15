#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AbsorptionLodInput.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__AbsorptionLodInput_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLodInput.get_DefaultMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputMode (::WaveHarmonic::Crest::AbsorptionLodInput::*)()>(&::WaveHarmonic::Crest::AbsorptionLodInput::get_DefaultMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLodInput.InferBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AbsorptionLodInput::*)()>(&::WaveHarmonic::Crest::AbsorptionLodInput::InferBlend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181c9c630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLodInput.get_FollowHorizontalMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::AbsorptionLodInput::*)()>(&::WaveHarmonic::Crest::AbsorptionLodInput::get_FollowHorizontalMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLodInput.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::AbsorptionLodInput::*)()>(&::WaveHarmonic::Crest::AbsorptionLodInput::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18254fd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLodInput.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::AbsorptionLodInput::*)()>(&::WaveHarmonic::Crest::AbsorptionLodInput::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18254fda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::AbsorptionLodInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::AbsorptionLodInput::*)()>(&::WaveHarmonic::Crest::AbsorptionLodInput::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18254fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::WaveHarmonic::Crest::LodInputMode WaveHarmonic::Crest::AbsorptionLodInput::get_DefaultMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AbsorptionLodInput::InferBlend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::AbsorptionLodInput::get_FollowHorizontalMotion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::AbsorptionLodInput::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::AbsorptionLodInput::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::AbsorptionLodInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::AbsorptionLodInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::AbsorptionLodInput* WaveHarmonic::Crest::AbsorptionLodInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::AbsorptionLodInput*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::AbsorptionLodInput::AbsorptionLodInput()   {
}
