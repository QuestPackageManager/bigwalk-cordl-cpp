#pragma once
// IWYU pragma private; include "GlobalNamespace/CDoDjiXYDCRkFNXhhaCSlJDUYtVD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CDoDjiXYDCRkFNXhhaCSlJDUYtVD)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CDoDjiXYDCRkFNXhhaCSlJDUYtVD;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CDoDjiXYDCRkFNXhhaCSlJDUYtVD*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CDoDjiXYDCRkFNXhhaCSlJDUYtVD*, "", "CDoDjiXYDCRkFNXhhaCSlJDUYtVD");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: CDoDjiXYDCRkFNXhhaCSlJDUYtVD
class CORDL_TYPE CDoDjiXYDCRkFNXhhaCSlJDUYtVD : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x181a52f80, size 0x1c0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  rawInputHeaderIndices, ::System::IntPtr  rawInputDataIndices, uint32_t  indicesCount, ::System::IntPtr  rawInputData, uint32_t  rawInputDataSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  rawInputHeaderIndices, ::System::IntPtr  rawInputDataIndices, uint32_t  indicesCount, ::System::IntPtr  rawInputData, uint32_t  rawInputDataSize) ;

static inline ::GlobalNamespace::CDoDjiXYDCRkFNXhhaCSlJDUYtVD* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181a53140, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CDoDjiXYDCRkFNXhhaCSlJDUYtVD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CDoDjiXYDCRkFNXhhaCSlJDUYtVD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CDoDjiXYDCRkFNXhhaCSlJDUYtVD(CDoDjiXYDCRkFNXhhaCSlJDUYtVD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CDoDjiXYDCRkFNXhhaCSlJDUYtVD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CDoDjiXYDCRkFNXhhaCSlJDUYtVD(CDoDjiXYDCRkFNXhhaCSlJDUYtVD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CDoDjiXYDCRkFNXhhaCSlJDUYtVD) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
