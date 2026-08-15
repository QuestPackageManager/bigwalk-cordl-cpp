#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileSequenceSetter.hpp"
#include "GlobalNamespace/zzzz__PegTileMusicConnector_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileRenderer_impl.hpp"
#include "GlobalNamespace/zzzz__SplitFlapGlyph_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileSequenceSetter_def.hpp"
#include "GlobalNamespace/zzzz__PegTileDataSet_def.hpp"
#include "GlobalNamespace/zzzz__PegTileSequenceGenerator_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceSetter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceSetter::*)()>(&::GlobalNamespace::PegTileSequenceSetter::Awake)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18040c680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceSetter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceSetter.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceSetter::*)()>(&::GlobalNamespace::PegTileSequenceSetter::OnChange)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x18040cb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceSetter*>(),
                        {"OnChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceSetter.Match
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceSetter::*)(::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*)>(&::GlobalNamespace::PegTileSequenceSetter::Match)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18040c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceSetter*>(),
                        {"Match", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileSequenceSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileSequenceSetter::*)()>(&::GlobalNamespace::PegTileSequenceSetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_sequenceOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequenceOrigin;
}
constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator> const& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_sequenceOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequenceOrigin;
}
constexpr void GlobalNamespace::PegTileSequenceSetter::__cordl_internal_set_sequenceOrigin(::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequenceOrigin = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_pegTileDataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileDataSet;
}
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_pegTileDataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileDataSet;
}
constexpr void GlobalNamespace::PegTileSequenceSetter::__cordl_internal_set_pegTileDataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pegTileDataSet = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PegTileRenderer>>& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_pegTileRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileRenderers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PegTileRenderer>> const& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_pegTileRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileRenderers;
}
constexpr void GlobalNamespace::PegTileSequenceSetter::__cordl_internal_set_pegTileRenderers(::ArrayW<::UnityW<::GlobalNamespace::PegTileRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pegTileRenderers = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_splitFlapGlyphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitFlapGlyphs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>> const& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_splitFlapGlyphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splitFlapGlyphs;
}
constexpr void GlobalNamespace::PegTileSequenceSetter::__cordl_internal_set_splitFlapGlyphs(::ArrayW<::UnityW<::GlobalNamespace::SplitFlapGlyph>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splitFlapGlyphs = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PegTileMusicConnector>>& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_musicConnectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicConnectors;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PegTileMusicConnector>> const& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_musicConnectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicConnectors;
}
constexpr void GlobalNamespace::PegTileSequenceSetter::__cordl_internal_set_musicConnectors(::ArrayW<::UnityW<::GlobalNamespace::PegTileMusicConnector>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicConnectors = value;
}
constexpr bool& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PegTileSequenceSetter::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PegTileSequenceSetter::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PegTileSequenceSetter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceSetter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileSequenceSetter::OnChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceSetter*>(),
                        {"OnChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileSequenceSetter::Match(::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceSetter*>(),
                        {"Match", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sequence);
}
inline void GlobalNamespace::PegTileSequenceSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileSequenceSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PegTileSequenceSetter* GlobalNamespace::PegTileSequenceSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PegTileSequenceSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileSequenceSetter::PegTileSequenceSetter()   {
}
