#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetails.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetails_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsAttribute_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsCopyInfoOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsCopySessionAttributeByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsCopySessionAttributeByKeyOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsGetSessionAttributeCountOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetails._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetails::*)()>(&::Epic::OnlineServices::Sessions::SessionDetails::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetails._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetails::*)(::System::IntPtr)>(&::Epic::OnlineServices::Sessions::SessionDetails::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetails.CopyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionDetails::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>)>(&::Epic::OnlineServices::Sessions::SessionDetails::CopyInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f23e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"CopyInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetails.CopySessionAttributeByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionDetails::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>)>(&::Epic::OnlineServices::Sessions::SessionDetails::CopySessionAttributeByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f2460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"CopySessionAttributeByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetails.CopySessionAttributeByKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionDetails::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>)>(&::Epic::OnlineServices::Sessions::SessionDetails::CopySessionAttributeByKey)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f24e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"CopySessionAttributeByKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetails.GetSessionAttributeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::SessionDetails::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions>)>(&::Epic::OnlineServices::Sessions::SessionDetails::GetSessionAttributeCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f25a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"GetSessionAttributeCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetails.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetails::*)()>(&::Epic::OnlineServices::Sessions::SessionDetails::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f25e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionDetails::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionDetails::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionDetails::CopyInfo(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>  outSessionInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"CopyInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopyInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionDetails::CopySessionAttributeByIndex(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>  outSessionAttribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"CopySessionAttributeByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionAttribute);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionDetails::CopySessionAttributeByKey(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>  outSessionAttribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"CopySessionAttributeByKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsCopySessionAttributeByKeyOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsAttribute>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionAttribute);
}
inline uint32_t Epic::OnlineServices::Sessions::SessionDetails::GetSessionAttributeCount(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"GetSessionAttributeCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsGetSessionAttributeCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Sessions::SessionDetails::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetails*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Sessions::SessionDetails* Epic::OnlineServices::Sessions::SessionDetails::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::SessionDetails*>());
}
inline ::Epic::OnlineServices::Sessions::SessionDetails* Epic::OnlineServices::Sessions::SessionDetails::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::SessionDetails*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionDetails::SessionDetails()   {
}
