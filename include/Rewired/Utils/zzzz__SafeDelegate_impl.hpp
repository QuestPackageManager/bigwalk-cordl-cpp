#pragma once
// IWYU pragma private; include "Rewired/Utils/SafeDelegate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__SafeDelegate_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::SafeDelegate::*)()>(&::Rewired::Utils::SafeDelegate::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                    {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate.RemoveDelegateOrAllDelegatesFromAnObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::SafeDelegate::*)(::System::Object*)>(&::Rewired::Utils::SafeDelegate::RemoveDelegateOrAllDelegatesFromAnObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                    {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate.get_ExceptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::System::Exception*>* (::Rewired::Utils::SafeDelegate::*)()>(&::Rewired::Utils::SafeDelegate::get_ExceptionHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                    {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate.set_ExceptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::SafeDelegate::*)(::System::Action_1<::System::Exception*>*)>(&::Rewired::Utils::SafeDelegate::set_ExceptionHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                    {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::SafeDelegate::*)()>(&::Rewired::Utils::SafeDelegate::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                    {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Utils::SafeDelegate::*)()>(&::Rewired::Utils::SafeDelegate::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                    {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate.get_S_ExceptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::System::Exception*>* (*)()>(&::Rewired::Utils::SafeDelegate::get_S_ExceptionHandler)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18190d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                        {"get_S_ExceptionHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate.set_S_ExceptionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::Exception*>*)>(&::Rewired::Utils::SafeDelegate::set_S_ExceptionHandler)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18190d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                        {"set_S_ExceptionHandler", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::SafeDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::SafeDelegate::*)()>(&::Rewired::Utils::SafeDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::SafeDelegate::setStaticF_BlfOHmLBGtFRnTHBZdWwIDZtoZZ(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "BlfOHmLBGtFRnTHBZdWwIDZtoZZ", ::Rewired::Utils::SafeDelegate*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Rewired::Utils::SafeDelegate::getStaticF_BlfOHmLBGtFRnTHBZdWwIDZtoZZ()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "BlfOHmLBGtFRnTHBZdWwIDZtoZZ", ::Rewired::Utils::SafeDelegate*>();
}
inline int32_t Rewired::Utils::SafeDelegate::get_Count()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Utils::SafeDelegate::RemoveDelegateOrAllDelegatesFromAnObject(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::System::Action_1<::System::Exception*>* Rewired::Utils::SafeDelegate::get_ExceptionHandler()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::System::Exception*>*>(this, ___internal_method);
}
inline void Rewired::Utils::SafeDelegate::set_ExceptionHandler(::System::Action_1<::System::Exception*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::SafeDelegate::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Rewired::Utils::SafeDelegate::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::SafeDelegate*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Action_1<::System::Exception*>* Rewired::Utils::SafeDelegate::get_S_ExceptionHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                        {"get_S_ExceptionHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::System::Exception*>*>(nullptr, ___internal_method);
}
inline void Rewired::Utils::SafeDelegate::set_S_ExceptionHandler(::System::Action_1<::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                        {"set_S_ExceptionHandler", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Rewired::Utils::SafeDelegate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeDelegate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::SafeDelegate* Rewired::Utils::SafeDelegate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::SafeDelegate*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  Rewired::Utils::SafeDelegate::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Rewired::Utils::SafeDelegate::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::SafeDelegate::SafeDelegate()   {
}
