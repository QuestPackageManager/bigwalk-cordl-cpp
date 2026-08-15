#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/IntPtrWrapper.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__IntPtrWrapper_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::IntPtrWrapper.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Data::IntPtrWrapper::*)()>(&::Rewired::Utils::Classes::Data::IntPtrWrapper::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181458e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::IntPtrWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::IntPtrWrapper::*)(::System::IntPtr)>(&::Rewired::Utils::Classes::Data::IntPtrWrapper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::IntPtrWrapper.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Data::IntPtrWrapper::*)()>(&::Rewired::Utils::Classes::Data::IntPtrWrapper::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819541b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Data::IntPtrWrapper.op_Implicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Rewired::Utils::Classes::Data::IntPtrWrapper*)>(&::Rewired::Utils::Classes::Data::IntPtrWrapper::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x59cf0;
  constexpr static std::size_t addrs = 0x180912770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Rewired::Utils::Classes::Data::IntPtrWrapper::__cordl_internal_get_eFQKlqkUirJQBbOBJAQfWmfdtFct()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eFQKlqkUirJQBbOBJAQfWmfdtFct;
}
constexpr ::System::IntPtr const& Rewired::Utils::Classes::Data::IntPtrWrapper::__cordl_internal_get_eFQKlqkUirJQBbOBJAQfWmfdtFct() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eFQKlqkUirJQBbOBJAQfWmfdtFct;
}
constexpr void Rewired::Utils::Classes::Data::IntPtrWrapper::__cordl_internal_set_eFQKlqkUirJQBbOBJAQfWmfdtFct(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eFQKlqkUirJQBbOBJAQfWmfdtFct = value;
}
inline bool Rewired::Utils::Classes::Data::IntPtrWrapper::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Data::IntPtrWrapper::_ctor(::System::IntPtr  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Utils::Classes::Data::IntPtrWrapper::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr Rewired::Utils::Classes::Data::IntPtrWrapper::op_Implicit___System__IntPtr(::Rewired::Utils::Classes::Data::IntPtrWrapper*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::IntPtrWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline ::Rewired::Utils::Classes::Data::IntPtrWrapper* Rewired::Utils::Classes::Data::IntPtrWrapper::New_ctor(::System::IntPtr  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::IntPtrWrapper*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Data::IntPtrWrapper::IntPtrWrapper()   {
}
