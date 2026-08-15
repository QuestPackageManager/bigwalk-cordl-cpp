#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Lod_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__LodQuerySource_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Lod_1)
namespace WaveHarmonic::Crest {
template<typename T>
class IQueryableLod_1;
}
namespace WaveHarmonic::Crest {
struct LodQuerySource;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
template<typename T>
class Lod_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::Lod_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::Lod_1, "WaveHarmonic.Crest", "Lod`1");
// Dependencies WaveHarmonic.Crest.Lod, WaveHarmonic.Crest.LodQuerySource
namespace WaveHarmonic::Crest {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.Lod`1<T>
class CORDL_TYPE Lod_1 : public ::WaveHarmonic::Crest::Lod {
public:
// Declarations
 __declspec(property(get=get_MaximumQueryCount)) int32_t  MaximumQueryCount;

 __declspec(property(get=get_Provider, put=set_Provider)) T  Provider;

 __declspec(property(get=get_QuerySource, put=set_QuerySource)) ::WaveHarmonic::Crest::LodQuerySource  QuerySource;

 __declspec(property(get=WaveHarmonic_Crest_IQueryableLod_T__get_Name)) ::StringW  WaveHarmonic_Crest_IQueryableLod_T__Name;

 __declspec(property(get=WaveHarmonic_Crest_IQueryableLod_T__get_Texel)) float_t  WaveHarmonic_Crest_IQueryableLod_T__Texel;

 __declspec(property(get=WaveHarmonic_Crest_IQueryableLod_T__get_Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  WaveHarmonic_Crest_IQueryableLod_T__Water;

/// @brief Field _MaximumQueryCount, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumQueryCount, put=__cordl_internal_set__MaximumQueryCount)) int32_t  _MaximumQueryCount;

/// @brief Field <Provider>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Provider_k__BackingField, put=__cordl_internal_set__Provider_k__BackingField)) T  _Provider_k__BackingField;

/// @brief Field _QuerySource, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__QuerySource, put=__cordl_internal_set__QuerySource)) ::WaveHarmonic::Crest::LodQuerySource  _QuerySource;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryableLod_1<T>"
constexpr operator  ::WaveHarmonic::Crest::IQueryableLod_1<T>*() noexcept;

/// @brief Method AfterExecute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AfterExecute() ;

/// @brief Method CreateProvider, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T CreateProvider(bool  onEnable) ;

/// @brief Method InitializeProvider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InitializeProvider(bool  onEnable) ;

static inline ::WaveHarmonic::Crest::Lod_1<T>* New_ctor() ;

/// @brief Method SetGlobals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetGlobals(bool  onEnable) ;

/// @brief Method WaveHarmonic.Crest.IQueryableLod<T>.get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW WaveHarmonic_Crest_IQueryableLod_T__get_Name() ;

/// @brief Method WaveHarmonic.Crest.IQueryableLod<T>.get_Texel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t WaveHarmonic_Crest_IQueryableLod_T__get_Texel() ;

/// @brief Method WaveHarmonic.Crest.IQueryableLod<T>.get_Water, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityW<::WaveHarmonic::Crest::WaterRenderer> WaveHarmonic_Crest_IQueryableLod_T__get_Water() ;

constexpr int32_t const& __cordl_internal_get__MaximumQueryCount() const;

constexpr int32_t& __cordl_internal_get__MaximumQueryCount() ;

constexpr T const& __cordl_internal_get__Provider_k__BackingField() const;

constexpr T& __cordl_internal_get__Provider_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::LodQuerySource const& __cordl_internal_get__QuerySource() const;

constexpr ::WaveHarmonic::Crest::LodQuerySource& __cordl_internal_get__QuerySource() ;

constexpr void __cordl_internal_set__MaximumQueryCount(int32_t  value) ;

constexpr void __cordl_internal_set__Provider_k__BackingField(T  value) ;

constexpr void __cordl_internal_set__QuerySource(::WaveHarmonic::Crest::LodQuerySource  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaximumQueryCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_MaximumQueryCount() ;

/// @brief Method get_Provider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Provider() ;

/// @brief Method get_QuerySource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::WaveHarmonic::Crest::LodQuerySource get_QuerySource() ;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryableLod_1<T>"
constexpr ::WaveHarmonic::Crest::IQueryableLod_1<T>* i___WaveHarmonic__Crest__IQueryableLod_1_T_() noexcept;

/// @brief Method set_Provider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Provider(T  value) ;

/// @brief Method set_QuerySource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_QuerySource(::WaveHarmonic::Crest::LodQuerySource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lod_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lod_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lod_1(Lod_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lod_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lod_1(Lod_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16585};

/// @brief Field _QuerySource, offset: 0x94, size: 0x4, def value: None
 ::WaveHarmonic::Crest::LodQuerySource  ____QuerySource;

/// @brief Field _MaximumQueryCount, offset: 0x98, size: 0x4, def value: None
 int32_t  ____MaximumQueryCount;

/// @brief Field <Provider>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 T  ____Provider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
