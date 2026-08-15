#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnWriteFileDataCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnWriteFileDataCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__OnWriteFileDataCallbackInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteFileDataCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* (*)()>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::PlayerDataStorage::WriteResult (*)(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>, ::System::IntPtr, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804fb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>  data, ::System::IntPtr  outDataBuffer, ::by_ref<uint32_t>  outDataWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::PlayerDataStorage::WriteResult>(nullptr, ___internal_method, data, outDataBuffer, outDataWritten);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation::OnWriteFileDataCallbackInternalImplementation()   {
}
