#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UploadHandlerRaw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadHandlerRaw)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UploadHandlerRaw;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::UploadHandlerRaw*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::UploadHandlerRaw*, "UnityEngine.Networking", "UploadHandlerRaw");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Networking.UploadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.UploadHandlerRaw
class CORDL_TYPE UploadHandlerRaw : public ::UnityEngine::Networking::UploadHandler {
public:
// Declarations
/// @brief Field m_Payload, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Payload, put=__cordl_internal_set_m_Payload)) ::Unity::Collections::NativeArray_1<uint8_t>  m_Payload;

/// @brief Method Create, addr 0x18254b630, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Create(::UnityEngine::Networking::UploadHandlerRaw*  self, uint8_t*  data, int32_t  dataLength) ;

/// @brief Method Dispose, addr 0x18254b640, size 0x40, virtual true, abstract: false, final false
inline void Dispose() ;

static inline ::UnityEngine::Networking::UploadHandlerRaw* New_ctor(::ArrayW<uint8_t>  data) ;

static inline ::UnityEngine::Networking::UploadHandlerRaw* New_ctor(::Unity::Collections::NativeArray_1<uint8_t>  data, bool  transferOwnership) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_Payload() const;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_Payload() ;

constexpr void __cordl_internal_set_m_Payload(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x18254b680, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data) ;

/// @brief Method .ctor, addr 0x18254b700, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t>  data, bool  transferOwnership) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UploadHandlerRaw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UploadHandlerRaw", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadHandlerRaw(UploadHandlerRaw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadHandlerRaw", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadHandlerRaw(UploadHandlerRaw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20861};

/// @brief Field m_Payload, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  ___m_Payload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::UploadHandlerRaw, ___m_Payload) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Networking::UploadHandlerRaw) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Networking
