#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Extensions/AuthScopeFlagsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Extensions/zzzz__AuthScopeFlagsExtensions_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__AuthScopeFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions.get_CustomMappings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>* (*)()>(&::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::get_CustomMappings)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180535150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*>(),
                        {"get_CustomMappings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions.GetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Epic::OnlineServices::Auth::AuthScopeFlags)>(&::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::GetDescription)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180534eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*>(),
                        {"GetDescription", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::AuthScopeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::StringW>*, ::by_ref<::Epic::OnlineServices::Auth::AuthScopeFlags>)>(&::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::TryParse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180534fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::AuthScopeFlags>>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::setStaticF__CustomMappings_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>*, "<CustomMappings>k__BackingField", ::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>* PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::getStaticF__CustomMappings_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>*, "<CustomMappings>k__BackingField", ::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>* PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::get_CustomMappings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*>(),
                        {"get_CustomMappings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Epic::OnlineServices::Auth::AuthScopeFlags>*>(nullptr, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::GetDescription(::Epic::OnlineServices::Auth::AuthScopeFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*>(),
                        {"GetDescription", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::AuthScopeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, flags);
}
inline bool PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::TryParse(::System::Collections::Generic::IList_1<::StringW>*  stringFlags, ::by_ref<::Epic::OnlineServices::Auth::AuthScopeFlags>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::AuthScopeFlags>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringFlags, result);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Extensions::AuthScopeFlagsExtensions::AuthScopeFlagsExtensions()   {
}
