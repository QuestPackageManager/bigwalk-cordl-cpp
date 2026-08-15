#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleTerrainOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleTerrainOperation_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleTerrainOperation.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::ToggleTerrainOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleTerrainOperation::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b51b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleTerrainOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::ToggleTerrainOperation::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::ToggleTerrainOperation::Execute)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803b50c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleTerrainOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::ToggleTerrainOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleTerrainOperation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b3b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Shipmates::RemotePlayerDebug::ToggleTerrainOperation::__cordl_internal_get__currentTerrainsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTerrainsEnabled;
}
constexpr bool const& Shipmates::RemotePlayerDebug::ToggleTerrainOperation::__cordl_internal_get__currentTerrainsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTerrainsEnabled;
}
constexpr void Shipmates::RemotePlayerDebug::ToggleTerrainOperation::__cordl_internal_set__currentTerrainsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTerrainsEnabled = value;
}
inline ::StringW Shipmates::RemotePlayerDebug::ToggleTerrainOperation::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::ToggleTerrainOperation::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline void Shipmates::RemotePlayerDebug::ToggleTerrainOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::ToggleTerrainOperation* Shipmates::RemotePlayerDebug::ToggleTerrainOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::ToggleTerrainOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::ToggleTerrainOperation::ToggleTerrainOperation()   {
}
