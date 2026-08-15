#pragma once
// IWYU pragma private; include "UnityEngine/Networking/CertificateHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateHandler)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Networking {
class CertificateHandler_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::Networking {
class CertificateHandler_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::CertificateHandler*);
MARK_REF_T(::UnityEngine::Networking::CertificateHandler_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::CertificateHandler*, "UnityEngine.Networking", "CertificateHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::CertificateHandler_BindingsMarshaller*, "UnityEngine.Networking", "CertificateHandler/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.CertificateHandler/BindingsMarshaller
class CORDL_TYPE CertificateHandler_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Networking::CertificateHandler*  handler) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CertificateHandler_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CertificateHandler_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateHandler_BindingsMarshaller(CertificateHandler_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateHandler_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateHandler_BindingsMarshaller(CertificateHandler_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Networking::CertificateHandler_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Networking
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.CertificateHandler
class CORDL_TYPE CertificateHandler : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Networking::CertificateHandler_BindingsMarshaller;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Method Dispose, addr 0x182549490, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ReleaseFromScripting, addr 0x1825494d0, size 0x30, virtual false, abstract: false, final false
inline void ReleaseFromScripting() ;

/// @brief Method ReleaseFromScripting_Injected, addr 0x1825494c0, size 0x10, virtual false, abstract: false, final false
static inline void ReleaseFromScripting_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ValidateCertificate, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool ValidateCertificate(::ArrayW<uint8_t>  certificateData) ;

/// @brief Method ValidateCertificateNative, addr 0x181617660, size 0x20, virtual false, abstract: false, final false
inline bool ValidateCertificateNative(::ArrayW<uint8_t>  certificateData) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CertificateHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CertificateHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateHandler(CertificateHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateHandler(CertificateHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20848};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::CertificateHandler, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Networking::CertificateHandler) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Networking
