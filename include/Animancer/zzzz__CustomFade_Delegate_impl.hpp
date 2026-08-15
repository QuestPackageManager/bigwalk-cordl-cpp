#pragma once
// IWYU pragma private; include "Animancer/CustomFade_Delegate.hpp"
#include "Animancer/zzzz__CustomFade_impl.hpp"
#include "Animancer/zzzz__CustomFade_Delegate_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomFade_Delegate.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CustomFade_Delegate* (*)(::System::Func_2<float_t,float_t>*)>(&::GlobalNamespace::CustomFade_Delegate::Acquire)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180308530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(),
                        {"Acquire", {}, {::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomFade_Delegate.CalculateWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CustomFade_Delegate::*)(float_t)>(&::GlobalNamespace::CustomFade_Delegate::CalculateWeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803085a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomFade_Delegate.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomFade_Delegate::*)()>(&::GlobalNamespace::CustomFade_Delegate::Release)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803085d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomFade_Delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomFade_Delegate::*)()>(&::GlobalNamespace::CustomFade_Delegate::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180307750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<float_t,float_t>*& GlobalNamespace::CustomFade_Delegate::__cordl_internal_get__CalculateWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CalculateWeight;
}
constexpr ::System::Func_2<float_t,float_t>* const& GlobalNamespace::CustomFade_Delegate::__cordl_internal_get__CalculateWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CalculateWeight;
}
constexpr void GlobalNamespace::CustomFade_Delegate::__cordl_internal_set__CalculateWeight(::System::Func_2<float_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CalculateWeight = value;
}
inline ::GlobalNamespace::CustomFade_Delegate* GlobalNamespace::CustomFade_Delegate::Acquire(::System::Func_2<float_t,float_t>*  calculateWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(),
                        {"Acquire", {}, {::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CustomFade_Delegate*>(nullptr, ___internal_method, calculateWeight);
}
inline float_t GlobalNamespace::CustomFade_Delegate::CalculateWeight(float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, progress);
}
inline void GlobalNamespace::CustomFade_Delegate::Release()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomFade_Delegate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomFade_Delegate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomFade_Delegate* GlobalNamespace::CustomFade_Delegate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomFade_Delegate*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomFade_Delegate::CustomFade_Delegate()   {
}
