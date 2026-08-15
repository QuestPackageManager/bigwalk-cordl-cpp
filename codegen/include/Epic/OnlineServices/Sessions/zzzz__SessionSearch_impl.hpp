#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearch.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearch_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetails_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchCopySearchResultByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchFindOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchGetSearchResultCountOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchOnFindCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchRemoveParameterOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchSetMaxResultsOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchSetParameterOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchSetSessionIdOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchSetTargetUserIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionSearch::*)()>(&::Epic::OnlineServices::Sessions::SessionSearch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionSearch::*)(::System::IntPtr)>(&::Epic::OnlineServices::Sessions::SessionSearch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.CopySearchResultByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionSearch::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions>, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>)>(&::Epic::OnlineServices::Sessions::SessionSearch::CopySearchResultByIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f32f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"CopySearchResultByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionSearch::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>, ::System::Object*, ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallback*)>(&::Epic::OnlineServices::Sessions::SessionSearch::Find)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804f3360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"Find", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.GetSearchResultCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Sessions::SessionSearch::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions>)>(&::Epic::OnlineServices::Sessions::SessionSearch::GetSearchResultCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f3560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"GetSearchResultCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionSearch::*)()>(&::Epic::OnlineServices::Sessions::SessionSearch::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f35a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.RemoveParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionSearch::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>)>(&::Epic::OnlineServices::Sessions::SessionSearch::RemoveParameter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f35b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"RemoveParameter", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.SetMaxResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionSearch::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>)>(&::Epic::OnlineServices::Sessions::SessionSearch::SetMaxResults)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804f3630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"SetMaxResults", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.SetParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionSearch::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>)>(&::Epic::OnlineServices::Sessions::SessionSearch::SetParameter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f3670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"SetParameter", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.SetSessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionSearch::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions>)>(&::Epic::OnlineServices::Sessions::SessionSearch::SetSessionId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f3730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"SetSessionId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearch.SetTargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Sessions::SessionSearch::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions>)>(&::Epic::OnlineServices::Sessions::SessionSearch::SetTargetUserId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f37a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"SetTargetUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionSearch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionSearch::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionSearch::CopySearchResultByIndex(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions>  options, ::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>  outSessionHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"CopySearchResultByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchCopySearchResultByIndexOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetails*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSessionHandle);
}
inline void Epic::OnlineServices::Sessions::SessionSearch::Find(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"Find", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Sessions::SessionSearchOnFindCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline uint32_t Epic::OnlineServices::Sessions::SessionSearch::GetSearchResultCount(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"GetSearchResultCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchGetSearchResultCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Sessions::SessionSearch::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionSearch::RemoveParameter(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"RemoveParameter", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchRemoveParameterOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionSearch::SetMaxResults(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"SetMaxResults", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetMaxResultsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionSearch::SetParameter(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"SetParameter", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionSearch::SetSessionId(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"SetSessionId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetSessionIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Sessions::SessionSearch::SetTargetUserId(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearch*>(),
                        {"SetTargetUserId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionSearchSetTargetUserIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Sessions::SessionSearch* Epic::OnlineServices::Sessions::SessionSearch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::SessionSearch*>());
}
inline ::Epic::OnlineServices::Sessions::SessionSearch* Epic::OnlineServices::Sessions::SessionSearch::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::SessionSearch*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionSearch::SessionSearch()   {
}
