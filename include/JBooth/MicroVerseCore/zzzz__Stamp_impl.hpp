#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Stamp.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FilterSet_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp_KeywordBuilder.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp_KeywordBuilder::*)(::StringW)>(&::JBooth::MicroVerseCore::Stamp_KeywordBuilder::Add)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181442820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp_KeywordBuilder.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp_KeywordBuilder::*)()>(&::JBooth::MicroVerseCore::Stamp_KeywordBuilder::Clear)> {
  constexpr static std::size_t size = 0x2f70;
  constexpr static std::size_t addrs = 0x180bb1530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp_KeywordBuilder.ClearInitial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp_KeywordBuilder::*)()>(&::JBooth::MicroVerseCore::Stamp_KeywordBuilder::ClearInitial)> {
  constexpr static std::size_t size = 0x7d80;
  constexpr static std::size_t addrs = 0x180d95cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"ClearInitial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp_KeywordBuilder.Assign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp_KeywordBuilder::*)(::UnityEngine::Material*)>(&::JBooth::MicroVerseCore::Stamp_KeywordBuilder::Assign)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181442890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"Assign", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp_KeywordBuilder.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp_KeywordBuilder::*)(::StringW)>(&::JBooth::MicroVerseCore::Stamp_KeywordBuilder::Remove)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181442990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp_KeywordBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp_KeywordBuilder::*)()>(&::JBooth::MicroVerseCore::Stamp_KeywordBuilder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181442a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& JBooth::MicroVerseCore::Stamp_KeywordBuilder::__cordl_internal_get_keywords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywords;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& JBooth::MicroVerseCore::Stamp_KeywordBuilder::__cordl_internal_get_keywords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywords;
}
constexpr void JBooth::MicroVerseCore::Stamp_KeywordBuilder::__cordl_internal_set_keywords(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keywords = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& JBooth::MicroVerseCore::Stamp_KeywordBuilder::__cordl_internal_get_initialKeywords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialKeywords;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& JBooth::MicroVerseCore::Stamp_KeywordBuilder::__cordl_internal_get_initialKeywords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialKeywords;
}
constexpr void JBooth::MicroVerseCore::Stamp_KeywordBuilder::__cordl_internal_set_initialKeywords(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialKeywords = value;
}
inline void JBooth::MicroVerseCore::Stamp_KeywordBuilder::setStaticF_kws(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "kws", ::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* JBooth::MicroVerseCore::Stamp_KeywordBuilder::getStaticF_kws()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "kws", ::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>();
}
inline void JBooth::MicroVerseCore::Stamp_KeywordBuilder::Add(::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, k);
}
inline void JBooth::MicroVerseCore::Stamp_KeywordBuilder::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Stamp_KeywordBuilder::ClearInitial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"ClearInitial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Stamp_KeywordBuilder::Assign(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"Assign", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline void JBooth::MicroVerseCore::Stamp_KeywordBuilder::Remove(::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, k);
}
inline void JBooth::MicroVerseCore::Stamp_KeywordBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Stamp_KeywordBuilder* JBooth::MicroVerseCore::Stamp_KeywordBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Stamp_KeywordBuilder*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Stamp_KeywordBuilder::Stamp_KeywordBuilder()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.StripInBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::StripInBuild)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805feb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::IsEnabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181449880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                        {"IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::GetBounds)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814497c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.ClearCachedBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::ClearCachedBounds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                        {"ClearCachedBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181449970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814498c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.GetFilterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroVerseCore::FilterSet* (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::GetFilterSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp.GetTerrainScalingFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::JBooth::MicroVerseCore::Stamp::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::Stamp::GetTerrainScalingFactor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814497f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                        {"GetTerrainScalingFactor", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Stamp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Stamp::*)()>(&::JBooth::MicroVerseCore::Stamp::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181449a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::Stamp_KeywordBuilder*& JBooth::MicroVerseCore::Stamp::__cordl_internal_get_keywordBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywordBuilder;
}
constexpr ::JBooth::MicroVerseCore::Stamp_KeywordBuilder* const& JBooth::MicroVerseCore::Stamp::__cordl_internal_get_keywordBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywordBuilder;
}
constexpr void JBooth::MicroVerseCore::Stamp::__cordl_internal_set_keywordBuilder(::JBooth::MicroVerseCore::Stamp_KeywordBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keywordBuilder = value;
}
constexpr int32_t& JBooth::MicroVerseCore::Stamp::__cordl_internal_get_stampVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stampVersion;
}
constexpr int32_t const& JBooth::MicroVerseCore::Stamp::__cordl_internal_get_stampVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stampVersion;
}
constexpr void JBooth::MicroVerseCore::Stamp::__cordl_internal_set_stampVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stampVersion = value;
}
inline void JBooth::MicroVerseCore::Stamp::setStaticF_terrainReferenceSize(float_t  value)  {
::cordl_internals::setStaticField<float_t, "terrainReferenceSize", ::JBooth::MicroVerseCore::Stamp*>(std::forward<float_t>(value));
}
inline float_t JBooth::MicroVerseCore::Stamp::getStaticF_terrainReferenceSize()  {
return ::cordl_internals::getStaticField<float_t, "terrainReferenceSize", ::JBooth::MicroVerseCore::Stamp*>();
}
inline void JBooth::MicroVerseCore::Stamp::StripInBuild()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::Stamp::IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                        {"IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::Stamp::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Stamp::ClearCachedBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                        {"ClearCachedBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Stamp::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Stamp::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FilterSet* JBooth::MicroVerseCore::Stamp::GetFilterSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroVerseCore::FilterSet*>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Stamp::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t JBooth::MicroVerseCore::Stamp::GetTerrainScalingFactor(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                        {"GetTerrainScalingFactor", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline void JBooth::MicroVerseCore::Stamp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Stamp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Stamp* JBooth::MicroVerseCore::Stamp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Stamp*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Stamp::Stamp()   {
}
