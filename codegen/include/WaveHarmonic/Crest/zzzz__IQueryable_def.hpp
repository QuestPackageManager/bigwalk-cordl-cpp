#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IQueryable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IQueryable)
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IQueryable;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IQueryable*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IQueryable*, "WaveHarmonic.Crest", "IQueryable");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IQueryable
class CORDL_TYPE IQueryable {
public:
// Declarations
 __declspec(property(get=get_QueryCount)) int32_t  QueryCount;

 __declspec(property(get=get_RequestCount)) int32_t  RequestCount;

 __declspec(property(get=get_ResultGuidCount)) int32_t  ResultGuidCount;

/// @brief Method CleanUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CleanUp() ;

/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SendReadBack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method UpdateQueries, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method get_QueryCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_QueryCount() ;

/// @brief Method get_RequestCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_RequestCount() ;

/// @brief Method get_ResultGuidCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_ResultGuidCount() ;

// Ctor Parameters [CppParam { name: "", ty: "IQueryable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IQueryable(IQueryable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16608};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
