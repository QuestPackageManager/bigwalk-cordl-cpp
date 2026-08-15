#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleTreesOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleTreesOperation_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleTreesOperation.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::ToggleTreesOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleTreesOperation::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b52b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleTreesOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::ToggleTreesOperation::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::ToggleTreesOperation::Execute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803b51c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleTreesOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::ToggleTreesOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleTreesOperation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Shipmates::RemotePlayerDebug::ToggleTreesOperation::__cordl_internal_get__currentTreeEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTreeEnabled;
}
constexpr bool const& Shipmates::RemotePlayerDebug::ToggleTreesOperation::__cordl_internal_get__currentTreeEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTreeEnabled;
}
constexpr void Shipmates::RemotePlayerDebug::ToggleTreesOperation::__cordl_internal_set__currentTreeEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTreeEnabled = value;
}
inline ::StringW Shipmates::RemotePlayerDebug::ToggleTreesOperation::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::ToggleTreesOperation::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline void Shipmates::RemotePlayerDebug::ToggleTreesOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::ToggleTreesOperation* Shipmates::RemotePlayerDebug::ToggleTreesOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::ToggleTreesOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::ToggleTreesOperation::ToggleTreesOperation()   {
}
