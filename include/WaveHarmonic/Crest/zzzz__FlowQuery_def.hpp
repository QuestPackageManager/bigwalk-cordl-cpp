#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FlowQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__QueryBaseSimple_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FlowQuery)
namespace WaveHarmonic::Crest {
class IFlowProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FlowQuery;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FlowQuery*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FlowQuery*, "WaveHarmonic.Crest", "FlowQuery");
// Dependencies WaveHarmonic.Crest.QueryBaseSimple
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FlowQuery
class CORDL_TYPE FlowQuery : public ::WaveHarmonic::Crest::QueryBaseSimple {
public:
// Declarations
 __declspec(property(get=get_Kernel)) int32_t  Kernel;

/// @brief Convert operator to "::WaveHarmonic::Crest::IFlowProvider"
constexpr operator  ::WaveHarmonic::Crest::IFlowProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

static inline ::WaveHarmonic::Crest::FlowQuery* New_ctor() ;

static inline ::WaveHarmonic::Crest::FlowQuery* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method .ctor, addr 0x182575570, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x182575540, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method get_Kernel, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Kernel() ;

/// @brief Convert to "::WaveHarmonic::Crest::IFlowProvider"
constexpr ::WaveHarmonic::Crest::IFlowProvider* i___WaveHarmonic__Crest__IFlowProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlowQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlowQuery", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowQuery(FlowQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowQuery", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowQuery(FlowQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16605};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FlowQuery) == 0xb0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
