#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IQueryableLod_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IQueryableLod_1)
namespace WaveHarmonic::Crest {
struct LodQuerySource;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
template<typename T>
class IQueryableLod_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::IQueryableLod_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::IQueryableLod_1, "WaveHarmonic.Crest", "IQueryableLod`1");
// Dependencies 
namespace WaveHarmonic::Crest {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.IQueryableLod`1<T>
class CORDL_TYPE IQueryableLod_1 {
public:
// Declarations
 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_MaximumQueryCount)) int32_t  MaximumQueryCount;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_QuerySource)) ::WaveHarmonic::Crest::LodQuerySource  QuerySource;

 __declspec(property(get=get_Texel)) float_t  Texel;

 __declspec(property(get=get_Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  Water;

/// @brief Method get_Enabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_MaximumQueryCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MaximumQueryCount() ;

/// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_QuerySource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::LodQuerySource get_QuerySource() ;

/// @brief Method get_Texel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Texel() ;

/// @brief Method get_Water, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::WaterRenderer> get_Water() ;

// Ctor Parameters [CppParam { name: "", ty: "IQueryableLod_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IQueryableLod_1(IQueryableLod_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16583};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
