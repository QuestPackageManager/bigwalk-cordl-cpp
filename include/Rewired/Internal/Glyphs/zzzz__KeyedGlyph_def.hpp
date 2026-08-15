#pragma once
// IWYU pragma private; include "Rewired/Internal/Glyphs/KeyedGlyph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyedGlyph)
namespace Rewired::Interfaces {
class IGlyphProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Internal::Glyphs {
class KeyedGlyph;
}
// Write type traits
MARK_REF_T(::Rewired::Internal::Glyphs::KeyedGlyph*);
DEFINE_IL2CPP_CLASS(::Rewired::Internal::Glyphs::KeyedGlyph*, "Rewired.Internal.Glyphs", "KeyedGlyph");
// Dependencies System.Object
namespace Rewired::Internal::Glyphs {
// Is value type: false
// CS Name: Rewired.Internal.Glyphs.KeyedGlyph
class CORDL_TYPE KeyedGlyph : public ::System::Object {
public:
// Declarations
/// @brief Field BteCvmTQZRbmjYksUchqBiwTFFWJA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BteCvmTQZRbmjYksUchqBiwTFFWJA, put=__cordl_internal_set_BteCvmTQZRbmjYksUchqBiwTFFWJA)) ::StringW  BteCvmTQZRbmjYksUchqBiwTFFWJA;

/// @brief Field JQSKcabdDVsrOFbILGlgFAwFktBQ, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_JQSKcabdDVsrOFbILGlgFAwFktBQ, put=__cordl_internal_set_JQSKcabdDVsrOFbILGlgFAwFktBQ)) uint32_t  JQSKcabdDVsrOFbILGlgFAwFktBQ;

 __declspec(property(get=get_cachedKey)) ::StringW  cachedKey;

 __declspec(property(get=get_cachedValue, put=set_cachedValue)) ::System::Object*  cachedValue;

 __declspec(property(get=get_hasCachedValue)) bool  hasCachedValue;

/// @brief Field ldaVDUgjwxEQjEgPDoFYvViZluYD, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ldaVDUgjwxEQjEgPDoFYvViZluYD, put=__cordl_internal_set_ldaVDUgjwxEQjEgPDoFYvViZluYD)) uint32_t  ldaVDUgjwxEQjEgPDoFYvViZluYD;

/// @brief Field tfyDVlmAibeEGWJXMbSaZmUVNRUe, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_tfyDVlmAibeEGWJXMbSaZmUVNRUe, put=__cordl_internal_set_tfyDVlmAibeEGWJXMbSaZmUVNRUe)) bool  tfyDVlmAibeEGWJXMbSaZmUVNRUe;

/// @brief Field vWZDkcEEzjRhmumUeFWNcHoRHllrA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_vWZDkcEEzjRhmumUeFWNcHoRHllrA, put=__cordl_internal_set_vWZDkcEEzjRhmumUeFWNcHoRHllrA)) ::System::Object*  vWZDkcEEzjRhmumUeFWNcHoRHllrA;

/// @brief Method Clear, addr 0x181906200, size 0x40, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Rewired::Internal::Glyphs::KeyedGlyph* New_ctor() ;

static inline ::Rewired::Internal::Glyphs::KeyedGlyph* New_ctor(::Rewired::Internal::Glyphs::KeyedGlyph*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method TryGetValue, addr 0x181906240, size 0x250, virtual false, abstract: false, final false
inline bool TryGetValue(::StringW  key, ::Rewired::Interfaces::IGlyphProvider*  glyphProvider, uint32_t  glyphProviderVersion, uint32_t  userVersion, ::by_ref<bool>  versionChanged, ::by_ref<::System::Object*>  result) ;

constexpr ::StringW const& __cordl_internal_get_BteCvmTQZRbmjYksUchqBiwTFFWJA() const;

constexpr ::StringW& __cordl_internal_get_BteCvmTQZRbmjYksUchqBiwTFFWJA() ;

constexpr uint32_t const& __cordl_internal_get_JQSKcabdDVsrOFbILGlgFAwFktBQ() const;

constexpr uint32_t& __cordl_internal_get_JQSKcabdDVsrOFbILGlgFAwFktBQ() ;

constexpr uint32_t const& __cordl_internal_get_ldaVDUgjwxEQjEgPDoFYvViZluYD() const;

constexpr uint32_t& __cordl_internal_get_ldaVDUgjwxEQjEgPDoFYvViZluYD() ;

constexpr bool const& __cordl_internal_get_tfyDVlmAibeEGWJXMbSaZmUVNRUe() const;

constexpr bool& __cordl_internal_get_tfyDVlmAibeEGWJXMbSaZmUVNRUe() ;

constexpr ::System::Object* const& __cordl_internal_get_vWZDkcEEzjRhmumUeFWNcHoRHllrA() const;

constexpr ::System::Object*& __cordl_internal_get_vWZDkcEEzjRhmumUeFWNcHoRHllrA() ;

constexpr void __cordl_internal_set_BteCvmTQZRbmjYksUchqBiwTFFWJA(::StringW  value) ;

constexpr void __cordl_internal_set_JQSKcabdDVsrOFbILGlgFAwFktBQ(uint32_t  value) ;

constexpr void __cordl_internal_set_ldaVDUgjwxEQjEgPDoFYvViZluYD(uint32_t  value) ;

constexpr void __cordl_internal_set_tfyDVlmAibeEGWJXMbSaZmUVNRUe(bool  value) ;

constexpr void __cordl_internal_set_vWZDkcEEzjRhmumUeFWNcHoRHllrA(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1818f37c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181906490, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Internal::Glyphs::KeyedGlyph*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_cachedKey, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_cachedKey() ;

/// @brief Method get_cachedValue, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_cachedValue() ;

/// @brief Method get_hasCachedValue, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_hasCachedValue() ;

/// @brief Method set_cachedValue, addr 0x1819064f0, size 0x40, virtual false, abstract: false, final false
inline void set_cachedValue(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyedGlyph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyedGlyph", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyedGlyph(KeyedGlyph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyedGlyph", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyedGlyph(KeyedGlyph const& ) = delete;

/// @brief Field INVALID_VERSION offset 0xffffffff size 0x4
static constexpr uint32_t  INVALID_VERSION{static_cast<uint32_t>(0x0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2866};

/// @brief Field JQSKcabdDVsrOFbILGlgFAwFktBQ, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___JQSKcabdDVsrOFbILGlgFAwFktBQ;

/// @brief Field ldaVDUgjwxEQjEgPDoFYvViZluYD, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___ldaVDUgjwxEQjEgPDoFYvViZluYD;

/// @brief Field vWZDkcEEzjRhmumUeFWNcHoRHllrA, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___vWZDkcEEzjRhmumUeFWNcHoRHllrA;

/// @brief Field tfyDVlmAibeEGWJXMbSaZmUVNRUe, offset: 0x20, size: 0x1, def value: None
 bool  ___tfyDVlmAibeEGWJXMbSaZmUVNRUe;

/// @brief Field BteCvmTQZRbmjYksUchqBiwTFFWJA, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___BteCvmTQZRbmjYksUchqBiwTFFWJA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Internal::Glyphs::KeyedGlyph, ___JQSKcabdDVsrOFbILGlgFAwFktBQ) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Glyphs::KeyedGlyph, ___ldaVDUgjwxEQjEgPDoFYvViZluYD) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Glyphs::KeyedGlyph, ___vWZDkcEEzjRhmumUeFWNcHoRHllrA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Glyphs::KeyedGlyph, ___tfyDVlmAibeEGWJXMbSaZmUVNRUe) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Internal::Glyphs::KeyedGlyph, ___BteCvmTQZRbmjYksUchqBiwTFFWJA) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Internal::Glyphs::KeyedGlyph) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Internal::Glyphs
