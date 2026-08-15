#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerDebugOperations.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperations_def.hpp"
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations.CreateOperations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>* (*)()>(&::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations::CreateOperations)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1803d03b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations*>(),
                        {"CreateOperations", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>* Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations::CreateOperations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations*>(),
                        {"CreateOperations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*>(nullptr, ___internal_method);
}
template<typename T>
inline T Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations::AddOperation(::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*  dict)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations*>(),
                    {"AddOperation", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, dict);
}
// Ctor Parameters []
constexpr ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperations::RemotePlayerDebugOperations()   {
}
