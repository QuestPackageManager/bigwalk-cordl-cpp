#pragma once
// IWYU pragma private; include "Mirror/RemoteCalls/Invoker.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteCallType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/RemoteCalls/zzzz__Invoker_def.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteCallDelegate_def.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteCallType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Mirror::RemoteCalls::Invoker.AreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::RemoteCalls::Invoker::*)(::System::Type*, ::Mirror::RemoteCalls::RemoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*)>(&::Mirror::RemoteCalls::Invoker::AreEqual)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181594480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::Invoker*>(),
                        {"AreEqual", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::Invoker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteCalls::Invoker::*)()>(&::Mirror::RemoteCalls::Invoker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::Invoker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Mirror::RemoteCalls::Invoker::__cordl_internal_get_componentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentType;
}
constexpr ::System::Type* const& Mirror::RemoteCalls::Invoker::__cordl_internal_get_componentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___componentType;
}
constexpr void Mirror::RemoteCalls::Invoker::__cordl_internal_set_componentType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___componentType = value;
}
constexpr ::Mirror::RemoteCalls::RemoteCallType& Mirror::RemoteCalls::Invoker::__cordl_internal_get_callType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callType;
}
constexpr ::Mirror::RemoteCalls::RemoteCallType const& Mirror::RemoteCalls::Invoker::__cordl_internal_get_callType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callType;
}
constexpr void Mirror::RemoteCalls::Invoker::__cordl_internal_set_callType(::Mirror::RemoteCalls::RemoteCallType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callType = value;
}
constexpr ::Mirror::RemoteCalls::RemoteCallDelegate*& Mirror::RemoteCalls::Invoker::__cordl_internal_get_function()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr ::Mirror::RemoteCalls::RemoteCallDelegate* const& Mirror::RemoteCalls::Invoker::__cordl_internal_get_function() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___function;
}
constexpr void Mirror::RemoteCalls::Invoker::__cordl_internal_set_function(::Mirror::RemoteCalls::RemoteCallDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___function = value;
}
constexpr bool& Mirror::RemoteCalls::Invoker::__cordl_internal_get_cmdRequiresAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cmdRequiresAuthority;
}
constexpr bool const& Mirror::RemoteCalls::Invoker::__cordl_internal_get_cmdRequiresAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cmdRequiresAuthority;
}
constexpr void Mirror::RemoteCalls::Invoker::__cordl_internal_set_cmdRequiresAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cmdRequiresAuthority = value;
}
inline bool Mirror::RemoteCalls::Invoker::AreEqual(::System::Type*  componentType, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*  invokeFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::Invoker*>(),
                        {"AreEqual", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, componentType, remoteCallType, invokeFunction);
}
inline void Mirror::RemoteCalls::Invoker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::Invoker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::RemoteCalls::Invoker* Mirror::RemoteCalls::Invoker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::RemoteCalls::Invoker*>());
}
// Ctor Parameters []
constexpr ::Mirror::RemoteCalls::Invoker::Invoker()   {
}
