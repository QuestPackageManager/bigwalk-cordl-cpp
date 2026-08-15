#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatKeywords.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatKeywords_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatKeywords.IsKeywordEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroSplat::MicroSplatKeywords::*)(::StringW)>(&::JBooth::MicroSplat::MicroSplatKeywords::IsKeywordEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813feab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatKeywords*>(),
                        {"IsKeywordEnabled", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatKeywords.EnableKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatKeywords::*)(::StringW)>(&::JBooth::MicroSplat::MicroSplatKeywords::EnableKeyword)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1813fea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatKeywords*>(),
                        {"EnableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatKeywords.DisableKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatKeywords::*)(::StringW)>(&::JBooth::MicroSplat::MicroSplatKeywords::DisableKeyword)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1813fe9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatKeywords*>(),
                        {"DisableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatKeywords._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatKeywords::*)()>(&::JBooth::MicroSplat::MicroSplatKeywords::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813feae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatKeywords*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& JBooth::MicroSplat::MicroSplatKeywords::__cordl_internal_get_keywords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywords;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& JBooth::MicroSplat::MicroSplatKeywords::__cordl_internal_get_keywords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywords;
}
constexpr void JBooth::MicroSplat::MicroSplatKeywords::__cordl_internal_set_keywords(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keywords = value;
}
inline bool JBooth::MicroSplat::MicroSplatKeywords::IsKeywordEnabled(::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatKeywords*>(),
                        {"IsKeywordEnabled", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, k);
}
inline void JBooth::MicroSplat::MicroSplatKeywords::EnableKeyword(::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatKeywords*>(),
                        {"EnableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, k);
}
inline void JBooth::MicroSplat::MicroSplatKeywords::DisableKeyword(::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatKeywords*>(),
                        {"DisableKeyword", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, k);
}
inline void JBooth::MicroSplat::MicroSplatKeywords::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatKeywords*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::MicroSplatKeywords* JBooth::MicroSplat::MicroSplatKeywords::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::MicroSplatKeywords*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::MicroSplatKeywords::MicroSplatKeywords()   {
}
