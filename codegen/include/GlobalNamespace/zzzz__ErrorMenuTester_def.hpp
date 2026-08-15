#pragma once
// IWYU pragma private; include "GlobalNamespace/ErrorMenuTester.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ErrorMenuTester)
// Forward declare root types
namespace GlobalNamespace {
class ErrorMenuTester;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ErrorMenuTester*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ErrorMenuTester*, "", "ErrorMenuTester");
// Dependencies ErrorUtils::ErrorType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ErrorMenuTester
class CORDL_TYPE ErrorMenuTester : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field errorType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_errorType, put=__cordl_internal_set_errorType)) ::GlobalNamespace::ErrorUtils_ErrorType  errorType;

static inline ::GlobalNamespace::ErrorMenuTester* New_ctor() ;

constexpr ::GlobalNamespace::ErrorUtils_ErrorType const& __cordl_internal_get_errorType() const;

constexpr ::GlobalNamespace::ErrorUtils_ErrorType& __cordl_internal_get_errorType() ;

constexpr void __cordl_internal_set_errorType(::GlobalNamespace::ErrorUtils_ErrorType  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorMenuTester() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorMenuTester", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorMenuTester(ErrorMenuTester && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMenuTester", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorMenuTester(ErrorMenuTester const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5223};

/// @brief Field errorType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ErrorUtils_ErrorType  ___errorType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ErrorMenuTester, ___errorType) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ErrorMenuTester) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
