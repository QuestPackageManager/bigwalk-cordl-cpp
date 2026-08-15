#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/RTCAdminInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__RTCAdminInterface_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__CopyUserTokenByIndexOptions_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__CopyUserTokenByUserIdOptions_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__KickOptions_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnKickCompleteCallback_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnQueryJoinRoomTokenCompleteCallback_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnSetParticipantHardMuteCompleteCallback_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__QueryJoinRoomTokenOptions_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__SetParticipantHardMuteOptions_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__UserToken_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::*)()>(&::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface.CopyUserTokenByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>)>(&::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::CopyUserTokenByIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180500340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"CopyUserTokenByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface.CopyUserTokenByUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>)>(&::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::CopyUserTokenByUserId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805003d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"CopyUserTokenByUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface.Kick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::KickOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback*)>(&::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::Kick)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180500490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"Kick", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::KickOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface.QueryJoinRoomToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*)>(&::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::QueryJoinRoomToken)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1805006c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"QueryJoinRoomToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface.SetParticipantHardMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>, ::System::Object*, ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*)>(&::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::SetParticipantHardMute)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180500940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"SetParticipantHardMute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::RTCAdminInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::RTCAdminInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAdmin::RTCAdminInterface::CopyUserTokenByIndex(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>  outUserToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"CopyUserTokenByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outUserToken);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::RTCAdmin::RTCAdminInterface::CopyUserTokenByUserId(::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>  outUserToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"CopyUserTokenByUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::CopyUserTokenByUserIdOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::RTCAdmin::UserToken>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outUserToken);
}
inline void Epic::OnlineServices::RTCAdmin::RTCAdminInterface::Kick(::by_ref<::Epic::OnlineServices::RTCAdmin::KickOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"Kick", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::KickOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAdmin::RTCAdminInterface::QueryJoinRoomToken(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"QueryJoinRoomToken", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::RTCAdmin::RTCAdminInterface::SetParticipantHardMute(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(),
                        {"SetParticipantHardMute", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface* Epic::OnlineServices::RTCAdmin::RTCAdminInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>());
}
inline ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface* Epic::OnlineServices::RTCAdmin::RTCAdminInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAdmin::RTCAdminInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::RTCAdminInterface::RTCAdminInterface()   {
}
