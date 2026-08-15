#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleRocksOperation.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleRocksOperation_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerRequest_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerResponse_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleRocksOperation.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Shipmates::RemotePlayerDebug::ToggleRocksOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleRocksOperation::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b4b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleRocksOperation.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::RemotePlayerDebug::RemotePlayerResponse* (::Shipmates::RemotePlayerDebug::ToggleRocksOperation::*)(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*)>(&::Shipmates::RemotePlayerDebug::ToggleRocksOperation::Execute)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1803b47c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>(),
                    {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::ToggleRocksOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmates::RemotePlayerDebug::ToggleRocksOperation::*)()>(&::Shipmates::RemotePlayerDebug::ToggleRocksOperation::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803b4b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Shipmates::RemotePlayerDebug::ToggleRocksOperation::__cordl_internal_get__currentRocksEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRocksEnabled;
}
constexpr bool const& Shipmates::RemotePlayerDebug::ToggleRocksOperation::__cordl_internal_get__currentRocksEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRocksEnabled;
}
constexpr void Shipmates::RemotePlayerDebug::ToggleRocksOperation::__cordl_internal_set__currentRocksEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRocksEnabled = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& Shipmates::RemotePlayerDebug::ToggleRocksOperation::__cordl_internal_get__disabledRocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledRocks;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& Shipmates::RemotePlayerDebug::ToggleRocksOperation::__cordl_internal_get__disabledRocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledRocks;
}
constexpr void Shipmates::RemotePlayerDebug::ToggleRocksOperation::__cordl_internal_set__disabledRocks(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledRocks = value;
}
inline ::StringW Shipmates::RemotePlayerDebug::ToggleRocksOperation::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Shipmates::RemotePlayerDebug::ToggleRocksOperation::Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::RemotePlayerDebug::RemotePlayerResponse*>(this, ___internal_method, request);
}
inline void Shipmates::RemotePlayerDebug::ToggleRocksOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmates::RemotePlayerDebug::ToggleRocksOperation* Shipmates::RemotePlayerDebug::ToggleRocksOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmates::RemotePlayerDebug::ToggleRocksOperation*>());
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::ToggleRocksOperation::ToggleRocksOperation()   {
}
