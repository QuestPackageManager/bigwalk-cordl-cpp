#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModification.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModification_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationDeleteDataOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetDataOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetJoinInfoOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetRawRichTextOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetStatusOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateDataOptions_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationSetTemplateIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModification::*)()>(&::Epic::OnlineServices::Presence::PresenceModification::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModification::*)(::System::IntPtr)>(&::Epic::OnlineServices::Presence::PresenceModification::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification.DeleteData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceModification::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions>)>(&::Epic::OnlineServices::Presence::PresenceModification::DeleteData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804ff670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"DeleteData", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::PresenceModification::*)()>(&::Epic::OnlineServices::Presence::PresenceModification::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804ff6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceModification::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>)>(&::Epic::OnlineServices::Presence::PresenceModification::SetData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804ff700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetData", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification.SetJoinInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceModification::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>)>(&::Epic::OnlineServices::Presence::PresenceModification::SetJoinInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ff780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetJoinInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification.SetRawRichText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceModification::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>)>(&::Epic::OnlineServices::Presence::PresenceModification::SetRawRichText)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ff7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetRawRichText", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification.SetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceModification::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>)>(&::Epic::OnlineServices::Presence::PresenceModification::SetStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804ff860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification.SetTemplateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceModification::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>)>(&::Epic::OnlineServices::Presence::PresenceModification::SetTemplateData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804ff8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetTemplateData", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::PresenceModification.SetTemplateId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Presence::PresenceModification::*)(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions>)>(&::Epic::OnlineServices::Presence::PresenceModification::SetTemplateId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ff8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetTemplateId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::PresenceModification::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Presence::PresenceModification::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceModification::DeleteData(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"DeleteData", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationDeleteDataOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Presence::PresenceModification::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceModification::SetData(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetData", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetDataOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceModification::SetJoinInfo(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetJoinInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceModification::SetRawRichText(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetRawRichText", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetRawRichTextOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceModification::SetStatus(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetStatusOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceModification::SetTemplateData(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetTemplateData", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateDataOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Presence::PresenceModification::SetTemplateId(::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::PresenceModification*>(),
                        {"SetTemplateId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::PresenceModificationSetTemplateIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Presence::PresenceModification* Epic::OnlineServices::Presence::PresenceModification::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Presence::PresenceModification*>());
}
inline ::Epic::OnlineServices::Presence::PresenceModification* Epic::OnlineServices::Presence::PresenceModification::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Presence::PresenceModification*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModification::PresenceModification()   {
}
