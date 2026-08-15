#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DirectionalTextureLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__TextureLodInputData_def.hpp"
CORDL_MODULE_EXPORT(DirectionalTextureLodInputData)
// Forward declare root types
namespace WaveHarmonic::Crest {
class DirectionalTextureLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DirectionalTextureLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DirectionalTextureLodInputData*, "WaveHarmonic.Crest", "DirectionalTextureLodInputData");
// Dependencies WaveHarmonic.Crest.TextureLodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DirectionalTextureLodInputData
class CORDL_TYPE DirectionalTextureLodInputData : public ::WaveHarmonic::Crest::TextureLodInputData {
public:
// Declarations
 __declspec(property(get=get_NegativeValues, put=set_NegativeValues)) bool  NegativeValues;

/// @brief Field _NegativeValues, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__NegativeValues, put=__cordl_internal_set__NegativeValues)) bool  _NegativeValues;

static inline ::WaveHarmonic::Crest::DirectionalTextureLodInputData* New_ctor() ;

constexpr bool const& __cordl_internal_get__NegativeValues() const;

constexpr bool& __cordl_internal_get__NegativeValues() ;

constexpr void __cordl_internal_set__NegativeValues(bool  value) ;

/// @brief Method .ctor, addr 0x1825750a0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NegativeValues, addr 0x180347a60, size 0xe0, virtual false, abstract: false, final false
inline bool get_NegativeValues() ;

/// @brief Method set_NegativeValues, addr 0x180452bb0, size 0x10, virtual false, abstract: false, final false
inline void set_NegativeValues(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalTextureLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalTextureLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalTextureLodInputData(DirectionalTextureLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalTextureLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalTextureLodInputData(DirectionalTextureLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16571};

/// @brief Field _NegativeValues, offset: 0x68, size: 0x1, def value: None
 bool  ____NegativeValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DirectionalTextureLodInputData, ____NegativeValues) == 0x68, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DirectionalTextureLodInputData) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
