#pragma once
// IWYU pragma private; include "Rewired/PlayerActiveControllerChangedDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Rewired/zzzz__PlayerActiveControllerChangedDelegate_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::PlayerActiveControllerChangedDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerActiveControllerChangedDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Rewired::PlayerActiveControllerChangedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805827c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerActiveControllerChangedDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerActiveControllerChangedDelegate::*)(::Rewired::Player*, ::Rewired::Controller*)>(&::Rewired::PlayerActiveControllerChangedDelegate::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(),
                    {::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerActiveControllerChangedDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Rewired::PlayerActiveControllerChangedDelegate::*)(::Rewired::Player*, ::Rewired::Controller*, ::System::AsyncCallback*, ::System::Object*)>(&::Rewired::PlayerActiveControllerChangedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180582750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(),
                    {::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerActiveControllerChangedDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerActiveControllerChangedDelegate::*)(::System::IAsyncResult*)>(&::Rewired::PlayerActiveControllerChangedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(),
                    {::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Rewired::PlayerActiveControllerChangedDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::PlayerActiveControllerChangedDelegate::Invoke(::Rewired::Player*  player, ::Rewired::Controller*  controller)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, controller);
}
inline ::System::IAsyncResult* Rewired::PlayerActiveControllerChangedDelegate::BeginInvoke(::Rewired::Player*  player, ::Rewired::Controller*  controller, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, player, controller, callback, object);
}
inline void Rewired::PlayerActiveControllerChangedDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerActiveControllerChangedDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Rewired::PlayerActiveControllerChangedDelegate* Rewired::PlayerActiveControllerChangedDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerActiveControllerChangedDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerActiveControllerChangedDelegate::PlayerActiveControllerChangedDelegate()   {
}
