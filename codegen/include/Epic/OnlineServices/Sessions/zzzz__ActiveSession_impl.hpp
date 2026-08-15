#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSession.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSession_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionCopyInfoOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionGetRegisteredPlayerByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionGetRegisteredPlayerCountOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSession::*)()>(&::Epic::OnlineServices::Sessions::ActiveSession::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSession._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSession::*)(::System::IntPtr)>(&::Epic::OnlineServices::Sessions::ActiveSession::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSession.CopyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::ActiveSession::*)(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>>)>(&::Epic::OnlineServices::Sessions::ActiveSession::CopyInfo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804bde40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {"CopyInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSession.GetRegisteredPlayerByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Sessions::ActiveSession::*)(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>)>(&::Epic::OnlineServices::Sessions::ActiveSession::GetRegisteredPlayerByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804bdf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {"GetRegisteredPlayerByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSession.GetRegisteredPlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::ActiveSession::*)(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions>)>(&::Epic::OnlineServices::Sessions::ActiveSession::GetRegisteredPlayerCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804be030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {"GetRegisteredPlayerCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSession.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSession::*)()>(&::Epic::OnlineServices::Sessions::ActiveSession::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804be0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::ActiveSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::ActiveSession::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::ActiveSession::CopyInfo(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>>  outActiveSessionInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {"CopyInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionCopyInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outActiveSessionInfo);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Sessions::ActiveSession::GetRegisteredPlayerByIndex(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {"GetRegisteredPlayerByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Sessions::ActiveSession::GetRegisteredPlayerCount(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {"GetRegisteredPlayerCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionGetRegisteredPlayerCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Sessions::ActiveSession::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSession*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Sessions::ActiveSession* Epic::OnlineServices::Sessions::ActiveSession::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::ActiveSession*>());
}
inline ::Epic::OnlineServices::Sessions::ActiveSession* Epic::OnlineServices::Sessions::ActiveSession::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::ActiveSession*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::ActiveSession::ActiveSession()   {
}
