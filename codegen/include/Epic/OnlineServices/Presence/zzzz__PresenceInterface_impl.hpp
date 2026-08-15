#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceInterface_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__AddNotifyJoinGameAcceptedOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__AddNotifyOnPresenceChangedOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__CopyPresenceOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__CreatePresenceModificationOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__GetJoinInfoOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__HasPresenceOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__Info_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__OnJoinGameAcceptedCallback_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__OnPresenceChangedCallback_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__OnQueryPresenceCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModification_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__QueryPresenceOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__SetPresenceCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__SetPresenceOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceInterface::*)()>(&::Epic::OnlineServices::Presence::PresenceInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Presence::PresenceInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.AddNotifyJoinGameAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Presence::PresenceInterface::*)(::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>, ::System::Object*, ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback*)>(&::Epic::OnlineServices::Presence::PresenceInterface::AddNotifyJoinGameAccepted)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804fe550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"AddNotifyJoinGameAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.AddNotifyOnPresenceChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::Presence::PresenceInterface::*)(::by_ref<::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions>, ::System::Object*, ::Epic::OnlineServices::Presence::OnPresenceChangedCallback*)>(&::Epic::OnlineServices::Presence::PresenceInterface::AddNotifyOnPresenceChanged)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804fe740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"AddNotifyOnPresenceChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Presence::OnPresenceChangedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.CopyPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceInterface::*)(::by_ref<::Epic::OnlineServices::Presence::CopyPresenceOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Presence::Info>>)>(&::Epic::OnlineServices::Presence::PresenceInterface::CopyPresence)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804fe930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"CopyPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::CopyPresenceOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Presence::Info>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.CreatePresenceModification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceInterface::*)(::by_ref<::Epic::OnlineServices::Presence::CreatePresenceModificationOptions>, ::by_ref<::Epic::OnlineServices::Presence::PresenceModification*>)>(&::Epic::OnlineServices::Presence::PresenceInterface::CreatePresenceModification)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804fea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"CreatePresenceModification", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::CreatePresenceModificationOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModification*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.GetJoinInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceInterface::*)(::by_ref<::Epic::OnlineServices::Presence::GetJoinInfoOptions>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::Presence::PresenceInterface::GetJoinInfo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804feab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"GetJoinInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::GetJoinInfoOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.HasPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Presence::PresenceInterface::*)(::by_ref<::Epic::OnlineServices::Presence::HasPresenceOptions>)>(&::Epic::OnlineServices::Presence::PresenceInterface::HasPresence)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804feba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"HasPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::HasPresenceOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.QueryPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceInterface::*)(::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>, ::System::Object*, ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback*)>(&::Epic::OnlineServices::Presence::PresenceInterface::QueryPresence)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804fec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"QueryPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.RemoveNotifyJoinGameAccepted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceInterface::*)(uint64_t)>(&::Epic::OnlineServices::Presence::PresenceInterface::RemoveNotifyJoinGameAccepted)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804fee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"RemoveNotifyJoinGameAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.RemoveNotifyOnPresenceChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceInterface::*)(uint64_t)>(&::Epic::OnlineServices::Presence::PresenceInterface::RemoveNotifyOnPresenceChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804feeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"RemoveNotifyOnPresenceChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceInterface.SetPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceInterface::*)(::by_ref<::Epic::OnlineServices::Presence::SetPresenceOptions>, ::System::Object*, ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*)>(&::Epic::OnlineServices::Presence::PresenceInterface::SetPresence)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804feee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"SetPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::SetPresenceOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::PresenceInterface::setStaticF_KEY_PLATFORM_PRESENCE(::Epic::OnlineServices::Utf8String*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Utf8String*, "KEY_PLATFORM_PRESENCE", ::Epic::OnlineServices::Presence::PresenceInterface*>(std::forward<::Epic::OnlineServices::Utf8String*>(value));
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Presence::PresenceInterface::getStaticF_KEY_PLATFORM_PRESENCE()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Utf8String*, "KEY_PLATFORM_PRESENCE", ::Epic::OnlineServices::Presence::PresenceInterface*>();
}
inline void Epic::OnlineServices::Presence::PresenceInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Presence::PresenceInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline uint64_t Epic::OnlineServices::Presence::PresenceInterface::AddNotifyJoinGameAccepted(::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"AddNotifyJoinGameAccepted", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Presence::OnJoinGameAcceptedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::Presence::PresenceInterface::AddNotifyOnPresenceChanged(::by_ref<::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Presence::OnPresenceChangedCallback*  notificationHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"AddNotifyOnPresenceChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::AddNotifyOnPresenceChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Presence::OnPresenceChangedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationHandler);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceInterface::CopyPresence(::by_ref<::Epic::OnlineServices::Presence::CopyPresenceOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Presence::Info>>  outPresence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"CopyPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::CopyPresenceOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Presence::Info>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outPresence);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceInterface::CreatePresenceModification(::by_ref<::Epic::OnlineServices::Presence::CreatePresenceModificationOptions>  options, ::by_ref<::Epic::OnlineServices::Presence::PresenceModification*>  outPresenceModificationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"CreatePresenceModification", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::CreatePresenceModificationOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModification*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outPresenceModificationHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceInterface::GetJoinInfo(::by_ref<::Epic::OnlineServices::Presence::GetJoinInfoOptions>  options, ::by_ref<::Epic::OnlineServices::Utf8String*>  outBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"GetJoinInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::GetJoinInfoOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBuffer);
}
inline bool Epic::OnlineServices::Presence::PresenceInterface::HasPresence(::by_ref<::Epic::OnlineServices::Presence::HasPresenceOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"HasPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::HasPresenceOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Presence::PresenceInterface::QueryPresence(::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"QueryPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::QueryPresenceOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Presence::OnQueryPresenceCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline void Epic::OnlineServices::Presence::PresenceInterface::RemoveNotifyJoinGameAccepted(uint64_t  inId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"RemoveNotifyJoinGameAccepted", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inId);
}
inline void Epic::OnlineServices::Presence::PresenceInterface::RemoveNotifyOnPresenceChanged(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"RemoveNotifyOnPresenceChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::Presence::PresenceInterface::SetPresence(::by_ref<::Epic::OnlineServices::Presence::SetPresenceOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceInterface*>(),
                        {"SetPresence", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::SetPresenceOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Presence::SetPresenceCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Presence::PresenceInterface* Epic::OnlineServices::Presence::PresenceInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Presence::PresenceInterface*>());
}
inline ::Epic::OnlineServices::Presence::PresenceInterface* Epic::OnlineServices::Presence::PresenceInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Presence::PresenceInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceInterface::PresenceInterface()   {
}
