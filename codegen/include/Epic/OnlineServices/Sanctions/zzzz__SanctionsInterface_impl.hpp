#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/SanctionsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__SanctionsInterface_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CopyPlayerSanctionByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealCallback_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealOptions_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__GetPlayerSanctionCountOptions_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__OnQueryActivePlayerSanctionsCallback_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__PlayerSanction_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__QueryActivePlayerSanctionsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::SanctionsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::SanctionsInterface::*)()>(&::Epic::OnlineServices::Sanctions::SanctionsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::SanctionsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::SanctionsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Sanctions::SanctionsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::SanctionsInterface.CopyPlayerSanctionByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sanctions::SanctionsInterface::*)(::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>>)>(&::Epic::OnlineServices::Sanctions::SanctionsInterface::CopyPlayerSanctionByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f1490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {"CopyPlayerSanctionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::SanctionsInterface.CreatePlayerSanctionAppeal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::SanctionsInterface::*)(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>, ::System::Object*, ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*)>(&::Epic::OnlineServices::Sanctions::SanctionsInterface::CreatePlayerSanctionAppeal)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804f1550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {"CreatePlayerSanctionAppeal", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::SanctionsInterface.GetPlayerSanctionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sanctions::SanctionsInterface::*)(::by_ref<::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions>)>(&::Epic::OnlineServices::Sanctions::SanctionsInterface::GetPlayerSanctionCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f1780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {"GetPlayerSanctionCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::SanctionsInterface.QueryActivePlayerSanctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::SanctionsInterface::*)(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>, ::System::Object*, ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback*)>(&::Epic::OnlineServices::Sanctions::SanctionsInterface::QueryActivePlayerSanctions)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804f17f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {"QueryActivePlayerSanctions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::SanctionsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Sanctions::SanctionsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sanctions::SanctionsInterface::CopyPlayerSanctionByIndex(::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>>  outSanction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {"CopyPlayerSanctionByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sanctions::PlayerSanction>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSanction);
}
inline void Epic::OnlineServices::Sanctions::SanctionsInterface::CreatePlayerSanctionAppeal(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {"CreatePlayerSanctionAppeal", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint32_t Epic::OnlineServices::Sanctions::SanctionsInterface::GetPlayerSanctionCount(::by_ref<::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {"GetPlayerSanctionCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Sanctions::SanctionsInterface::QueryActivePlayerSanctions(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(),
                        {"QueryActivePlayerSanctions", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Sanctions::SanctionsInterface* Epic::OnlineServices::Sanctions::SanctionsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sanctions::SanctionsInterface*>());
}
inline ::Epic::OnlineServices::Sanctions::SanctionsInterface* Epic::OnlineServices::Sanctions::SanctionsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sanctions::SanctionsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::SanctionsInterface::SanctionsInterface()   {
}
