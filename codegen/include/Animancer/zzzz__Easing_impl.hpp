#pragma once
// IWYU pragma private; include "Animancer/Easing.hpp"
#include "System/zzzz__Func_2_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__Easing_def.hpp"
#include "Animancer/zzzz__Easing_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::Easing_RangedDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Easing_RangedDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Animancer::Easing_RangedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180313d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_RangedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_RangedDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Easing_RangedDelegate::*)(float_t, float_t, float_t)>(&::Animancer::Easing_RangedDelegate::Invoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180313c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Easing_RangedDelegate*>(),
                    {::i2c::class_of<::Animancer::Easing_RangedDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_RangedDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Animancer::Easing_RangedDelegate::*)(float_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::Animancer::Easing_RangedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180313b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Easing_RangedDelegate*>(),
                    {::i2c::class_of<::Animancer::Easing_RangedDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_RangedDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Easing_RangedDelegate::*)(::System::IAsyncResult*)>(&::Animancer::Easing_RangedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180313c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::Easing_RangedDelegate*>(),
                    {::i2c::class_of<::Animancer::Easing_RangedDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Animancer::Easing_RangedDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_RangedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t Animancer::Easing_RangedDelegate::Invoke(float_t  start, float_t  end, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Easing_RangedDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, start, end, value);
}
inline ::System::IAsyncResult* Animancer::Easing_RangedDelegate::BeginInvoke(float_t  start, float_t  end, float_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Easing_RangedDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, start, end, value, callback, object);
}
inline float_t Animancer::Easing_RangedDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::Easing_RangedDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline ::Animancer::Easing_RangedDelegate* Animancer::Easing_RangedDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Easing_RangedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Animancer::Easing_RangedDelegate::Easing_RangedDelegate()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::Easing_Function::Easing_Function(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Function::Easing_Function()   {
}
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::Linear{static_cast<int32_t>(0x0)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuadraticIn{static_cast<int32_t>(0x1)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuadraticOut{static_cast<int32_t>(0x2)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuadraticInOut{static_cast<int32_t>(0x3)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::CubicIn{static_cast<int32_t>(0x4)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::CubicOut{static_cast<int32_t>(0x5)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::CubicInOut{static_cast<int32_t>(0x6)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuarticIn{static_cast<int32_t>(0x7)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuarticOut{static_cast<int32_t>(0x8)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuarticInOut{static_cast<int32_t>(0x9)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuinticIn{static_cast<int32_t>(0xa)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuinticOut{static_cast<int32_t>(0xb)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::QuinticInOut{static_cast<int32_t>(0xc)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::SineIn{static_cast<int32_t>(0xd)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::SineOut{static_cast<int32_t>(0xe)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::SineInOut{static_cast<int32_t>(0xf)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::ExponentialIn{static_cast<int32_t>(0x10)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::ExponentialOut{static_cast<int32_t>(0x11)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::ExponentialInOut{static_cast<int32_t>(0x12)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::CircularIn{static_cast<int32_t>(0x13)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::CircularOut{static_cast<int32_t>(0x14)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::CircularInOut{static_cast<int32_t>(0x15)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::BackIn{static_cast<int32_t>(0x16)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::BackOut{static_cast<int32_t>(0x17)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::BackInOut{static_cast<int32_t>(0x18)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::BounceIn{static_cast<int32_t>(0x19)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::BounceOut{static_cast<int32_t>(0x1a)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::BounceInOut{static_cast<int32_t>(0x1b)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::ElasticIn{static_cast<int32_t>(0x1c)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::ElasticOut{static_cast<int32_t>(0x1d)};
constexpr ::Animancer::Easing_Function  Animancer::Easing_Function::ElasticInOut{static_cast<int32_t>(0x1e)};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quadratic::In)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803133a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quadratic::Out)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180313410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quadratic::InOut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180313270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quadratic::InDerivative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180313170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quadratic::OutDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803133b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quadratic::InOutDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180313230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quadratic::In)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180313350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quadratic::Out)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180313440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quadratic::InOut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803132c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quadratic::InDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180313180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quadratic::OutDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803133d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quadratic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quadratic::InOutDerivative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803131c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Quadratic::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quadratic::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quadratic::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quadratic::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quadratic::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quadratic::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quadratic::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quadratic::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quadratic::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quadratic::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quadratic::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quadratic::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quadratic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Quadratic::Easing_Quadratic()   {
}
//  Writing Method size for method: ::Animancer::Easing_Cubic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Cubic::In)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Cubic::Out)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180307610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Cubic::InOut)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180307510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Cubic::InDerivative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803073e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Cubic::OutDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803075f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Cubic::InOutDerivative)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180307450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Cubic::In)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180307570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Cubic::Out)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180307630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Cubic::InOut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180307480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Cubic::InDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803073a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Cubic::OutDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803075b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Cubic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Cubic::InOutDerivative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803073f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Cubic::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Cubic::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Cubic::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Cubic::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Cubic::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Cubic::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Cubic::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Cubic::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Cubic::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Cubic::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Cubic::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Cubic::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Cubic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Cubic::Easing_Cubic()   {
}
//  Writing Method size for method: ::Animancer::Easing_Quartic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quartic::In)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803136c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quartic::Out)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180313780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quartic::InOut)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180313660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quartic::InDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180313490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quartic::OutDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180313760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quartic::InOutDerivative)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180313570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quartic::In)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803136d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quartic::Out)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803137b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quartic::InOut)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803135c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quartic::InDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803134b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quartic::OutDerivative)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180313710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quartic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quartic::InOutDerivative)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803134f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Quartic::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quartic::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quartic::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quartic::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quartic::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quartic::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quartic::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quartic::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quartic::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quartic::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quartic::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quartic::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quartic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Quartic::Easing_Quartic()   {
}
//  Writing Method size for method: ::Animancer::Easing_Quintic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quintic::In)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180313a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quintic::Out)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180313af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quintic::InOut)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180313910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quintic::InDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180313850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quintic::OutDerivative)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180313a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Quintic::InOutDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803138d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quintic::In)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180313a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quintic::Out)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180313b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quintic::InOut)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180313970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quintic::InDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180313810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quintic::OutDerivative)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180313aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Quintic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Quintic::InOutDerivative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180313870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Quintic::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quintic::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quintic::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quintic::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quintic::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quintic::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Quintic::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quintic::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quintic::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quintic::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quintic::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Quintic::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Quintic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Quintic::Easing_Quintic()   {
}
//  Writing Method size for method: ::Animancer::Easing_Sine.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Sine::In)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180314bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Sine::Out)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180314d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Sine::InOut)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180314b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Sine::InDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180314a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Sine::OutDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180314c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Sine::InOutDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180314b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Sine::In)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180314c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Sine::Out)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180314d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Sine::InOut)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180314b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Sine::InDerivative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180314a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Sine::OutDerivative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180314c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Sine.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Sine::InOutDerivative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180314ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Sine::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Sine::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Sine::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Sine::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Sine::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Sine::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Sine::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Sine::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Sine::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Sine::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Sine::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Sine::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Sine*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Sine::Easing_Sine()   {
}
//  Writing Method size for method: ::Animancer::Easing_Exponential.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Exponential::In)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18030c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Exponential::Out)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18030c720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Exponential::InOut)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18030c570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Exponential::InDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18030c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Exponential::OutDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18030c6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Exponential::InOutDerivative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18030c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Exponential::In)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18030c600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Exponential::Out)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030c750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Exponential::InOut)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18030c4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Exponential::InDerivative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18030c310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Exponential::OutDerivative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18030c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Exponential.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Exponential::InOutDerivative)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18030c3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Exponential::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Exponential::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Exponential::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Exponential::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Exponential::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Exponential::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Exponential::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Exponential::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Exponential::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Exponential::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Exponential::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Exponential::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Exponential*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Exponential::Easing_Exponential()   {
}
//  Writing Method size for method: ::Animancer::Easing_Circular.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Circular::In)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180305940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Circular::Out)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180305bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Circular::InOut)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180305890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Circular::InDerivative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180305540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Circular::OutDerivative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180305ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Circular::InOutDerivative)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180305710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Circular::In)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803059a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Circular::Out)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180305b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Circular::InOut)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803057b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Circular::InDerivative)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803055a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Circular::OutDerivative)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180305a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Circular.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Circular::InOutDerivative)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180305630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Circular::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Circular::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Circular::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Circular::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Circular::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Circular::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Circular::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Circular::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Circular::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Circular::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Circular::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Circular::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Circular*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Circular::Easing_Circular()   {
}
//  Writing Method size for method: ::Animancer::Easing_Back.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Back::In)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180304440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Back::Out)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180304580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Back::InOut)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180304380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Back::InDerivative)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180304130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Back::OutDerivative)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803044e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Back::InOutDerivative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180304260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Back::In)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803043f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Back::Out)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180304520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Back::InOut)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803042d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Back::InDerivative)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180304150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Back::OutDerivative)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180304460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Back.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Back::InOutDerivative)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803041a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Back::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Back::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Back::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Back::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Back::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Back::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Back::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Back::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Back::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Back::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Back::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Back::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Back*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Back::Easing_Back()   {
}
//  Writing Method size for method: ::Animancer::Easing_Bounce.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Bounce::In)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803049b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Bounce::Out)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180304b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Bounce::InOut)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180304870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Bounce::InDerivative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803045b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Bounce::OutDerivative)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180304a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Bounce::InOutDerivative)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180304790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Bounce::In)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803049f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Bounce::Out)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180304c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Bounce::InOut)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803048f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Bounce::InDerivative)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180304620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Bounce::OutDerivative)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180304ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Bounce.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Bounce::InOutDerivative)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803046d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Bounce::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Bounce::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Bounce::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Bounce::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Bounce::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Bounce::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Bounce::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Bounce::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Bounce::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Bounce::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Bounce::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Bounce::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Bounce*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Bounce::Easing_Bounce()   {
}
//  Writing Method size for method: ::Animancer::Easing_Elastic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Elastic::In)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18030bc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Elastic::Out)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18030be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Elastic::InOut)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18030b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Elastic::InDerivative)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18030b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Elastic::OutDerivative)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18030bca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing_Elastic::InOutDerivative)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18030b6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.In
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Elastic::In)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18030bb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.Out
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Elastic::Out)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18030bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.InOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Elastic::InOut)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18030b970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.InDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Elastic::InDerivative)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18030b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.OutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Elastic::OutDerivative)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18030bd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing_Elastic.InOutDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing_Elastic::InOutDerivative)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18030b660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Animancer::Easing_Elastic::In(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"In", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Elastic::Out(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Elastic::InOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Elastic::InDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Elastic::OutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Elastic::InOutDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing_Elastic::In(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"In", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Elastic::Out(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"Out", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Elastic::InOut(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Elastic::InDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Elastic::OutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"OutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing_Elastic::InOutDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing_Elastic*>(),
                        {"InOutDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing_Elastic::Easing_Elastic()   {
}
//  Writing Method size for method: ::Animancer::Easing.GetDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<float_t,float_t>* (*)(::Animancer::Easing_Function)>(&::Animancer::Easing::GetDelegate)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18030a290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"GetDelegate", {}, {::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.GetDerivativeDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_2<float_t,float_t>* (*)(::Animancer::Easing_Function)>(&::Animancer::Easing::GetDerivativeDelegate)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18030a6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"GetDerivativeDelegate", {}, {::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.GetRangedDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Easing_RangedDelegate* (*)(::Animancer::Easing_Function)>(&::Animancer::Easing::GetRangedDelegate)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18030ab10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"GetRangedDelegate", {}, {::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.GetRangedDerivativeDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Easing_RangedDelegate* (*)(::Animancer::Easing_Function)>(&::Animancer::Easing::GetRangedDerivativeDelegate)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x18030af50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"GetRangedDerivativeDelegate", {}, {::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing::Lerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"Lerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.UnLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing::UnLerp)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18030b430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"UnLerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.ReScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, ::System::Func_2<float_t,float_t>*)>(&::Animancer::Easing::ReScale)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18030b3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"ReScale", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.Linear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing::Linear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"Linear", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.LinearDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Animancer::Easing::LinearDerivative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"LinearDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.Linear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing::Linear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030b3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"Linear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Easing.LinearDerivative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Animancer::Easing::LinearDerivative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030b3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"LinearDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Easing::setStaticF__FunctionDelegates(::ArrayW<::System::Func_2<float_t,float_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Func_2<float_t,float_t>*>, "_FunctionDelegates", ::Animancer::Easing*>(std::forward<::ArrayW<::System::Func_2<float_t,float_t>*>>(value));
}
inline ::ArrayW<::System::Func_2<float_t,float_t>*> Animancer::Easing::getStaticF__FunctionDelegates()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Func_2<float_t,float_t>*>, "_FunctionDelegates", ::Animancer::Easing*>();
}
inline void Animancer::Easing::setStaticF__DerivativeDelegates(::ArrayW<::System::Func_2<float_t,float_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Func_2<float_t,float_t>*>, "_DerivativeDelegates", ::Animancer::Easing*>(std::forward<::ArrayW<::System::Func_2<float_t,float_t>*>>(value));
}
inline ::ArrayW<::System::Func_2<float_t,float_t>*> Animancer::Easing::getStaticF__DerivativeDelegates()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Func_2<float_t,float_t>*>, "_DerivativeDelegates", ::Animancer::Easing*>();
}
inline void Animancer::Easing::setStaticF__RangedFunctionDelegates(::ArrayW<::Animancer::Easing_RangedDelegate*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Animancer::Easing_RangedDelegate*>, "_RangedFunctionDelegates", ::Animancer::Easing*>(std::forward<::ArrayW<::Animancer::Easing_RangedDelegate*>>(value));
}
inline ::ArrayW<::Animancer::Easing_RangedDelegate*> Animancer::Easing::getStaticF__RangedFunctionDelegates()  {
return ::cordl_internals::getStaticField<::ArrayW<::Animancer::Easing_RangedDelegate*>, "_RangedFunctionDelegates", ::Animancer::Easing*>();
}
inline void Animancer::Easing::setStaticF__RangedDerivativeDelegates(::ArrayW<::Animancer::Easing_RangedDelegate*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Animancer::Easing_RangedDelegate*>, "_RangedDerivativeDelegates", ::Animancer::Easing*>(std::forward<::ArrayW<::Animancer::Easing_RangedDelegate*>>(value));
}
inline ::ArrayW<::Animancer::Easing_RangedDelegate*> Animancer::Easing::getStaticF__RangedDerivativeDelegates()  {
return ::cordl_internals::getStaticField<::ArrayW<::Animancer::Easing_RangedDelegate*>, "_RangedDerivativeDelegates", ::Animancer::Easing*>();
}
inline ::System::Func_2<float_t,float_t>* Animancer::Easing::GetDelegate(::Animancer::Easing_Function  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"GetDelegate", {}, {::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_2<float_t,float_t>*>(nullptr, ___internal_method, function);
}
inline ::System::Func_2<float_t,float_t>* Animancer::Easing::GetDerivativeDelegate(::Animancer::Easing_Function  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"GetDerivativeDelegate", {}, {::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_2<float_t,float_t>*>(nullptr, ___internal_method, function);
}
inline ::Animancer::Easing_RangedDelegate* Animancer::Easing::GetRangedDelegate(::Animancer::Easing_Function  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"GetRangedDelegate", {}, {::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Easing_RangedDelegate*>(nullptr, ___internal_method, function);
}
inline ::Animancer::Easing_RangedDelegate* Animancer::Easing::GetRangedDerivativeDelegate(::Animancer::Easing_Function  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"GetRangedDerivativeDelegate", {}, {::i2c::type_of<::Animancer::Easing_Function>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Easing_RangedDelegate*>(nullptr, ___internal_method, function);
}
inline float_t Animancer::Easing::Lerp(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"Lerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing::UnLerp(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"UnLerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing::ReScale(float_t  start, float_t  end, float_t  value, ::System::Func_2<float_t,float_t>*  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"ReScale", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value, function);
}
inline float_t Animancer::Easing::Linear(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"Linear", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing::LinearDerivative(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"LinearDerivative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t Animancer::Easing::Linear(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"Linear", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
inline float_t Animancer::Easing::LinearDerivative(float_t  start, float_t  end, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Easing*>(),
                        {"LinearDerivative", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start, end, value);
}
// Ctor Parameters []
constexpr ::Animancer::Easing::Easing()   {
}
