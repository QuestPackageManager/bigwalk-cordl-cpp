#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BufferedRTHandleSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedRTHandleSystem)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RTHandleProperties;
}
namespace UnityEngine::Rendering {
class RTHandleSystem;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BufferedRTHandleSystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::BufferedRTHandleSystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::BufferedRTHandleSystem*, "UnityEngine.Rendering", "BufferedRTHandleSystem");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BufferedRTHandleSystem
class CORDL_TYPE BufferedRTHandleSystem : public ::System::Object {
public:
// Declarations
/// @brief Field m_DisposedValue, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisposedValue, put=__cordl_internal_set_m_DisposedValue)) bool  m_DisposedValue;

/// @brief Field m_RTHandleSystem, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RTHandleSystem, put=__cordl_internal_set_m_RTHandleSystem)) ::UnityEngine::Rendering::RTHandleSystem*  m_RTHandleSystem;

/// @brief Field m_RTHandles, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RTHandles, put=__cordl_internal_set_m_RTHandles)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Rendering::RTHandle*>>*  m_RTHandles;

 __declspec(property(get=get_maxHeight)) int32_t  maxHeight;

 __declspec(property(get=get_maxWidth)) int32_t  maxWidth;

 __declspec(property(get=get_rtHandleProperties)) ::UnityEngine::Rendering::RTHandleProperties  rtHandleProperties;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AllocBuffer, addr 0x182034a30, size 0x120, virtual false, abstract: false, final false
inline void AllocBuffer(int32_t  bufferId, ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*,int32_t,::UnityEngine::Rendering::RTHandle*>*  allocator, int32_t  bufferCount) ;

/// @brief Method AllocBuffer, addr 0x1820347f0, size 0x240, virtual false, abstract: false, final false
inline void AllocBuffer(int32_t  bufferId, int32_t  bufferCount, ::by_ref<::UnityEngine::RenderTextureDescriptor>  descriptor, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::TextureWrapMode  wrapMode, bool  isShadowMap, int32_t  anisoLevel, float_t  mipMapBias, ::StringW  name) ;

/// @brief Method CalculateRatioAgainstMaxSize, addr 0x182034b50, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 CalculateRatioAgainstMaxSize(int32_t  width, int32_t  height) ;

/// @brief Method ClearBuffers, addr 0x182034b80, size 0x140, virtual false, abstract: false, final false
inline void ClearBuffers(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method Dispose, addr 0x182034df0, size 0x120, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x182034cc0, size 0x130, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetFrameRT, addr 0x182034f10, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* GetFrameRT(int32_t  bufferId, int32_t  frameIndex) ;

/// @brief Method GetNumFramesAllocated, addr 0x182034f80, size 0x50, virtual false, abstract: false, final false
inline int32_t GetNumFramesAllocated(int32_t  bufferId) ;

static inline ::UnityEngine::Rendering::BufferedRTHandleSystem* New_ctor() ;

/// @brief Method ReleaseAll, addr 0x182034fd0, size 0x100, virtual false, abstract: false, final false
inline void ReleaseAll() ;

/// @brief Method ReleaseBuffer, addr 0x1820350d0, size 0x140, virtual false, abstract: false, final false
inline void ReleaseBuffer(int32_t  bufferId) ;

/// @brief Method ResetReferenceSize, addr 0x182035210, size 0x30, virtual false, abstract: false, final false
inline void ResetReferenceSize(int32_t  width, int32_t  height) ;

/// @brief Method Swap, addr 0x182035290, size 0x260, virtual false, abstract: false, final false
inline void Swap() ;

/// @brief Method SwapAndSetReferenceSize, addr 0x182035240, size 0x50, virtual false, abstract: false, final false
inline void SwapAndSetReferenceSize(int32_t  width, int32_t  height) ;

constexpr bool const& __cordl_internal_get_m_DisposedValue() const;

constexpr bool& __cordl_internal_get_m_DisposedValue() ;

constexpr ::UnityEngine::Rendering::RTHandleSystem* const& __cordl_internal_get_m_RTHandleSystem() const;

constexpr ::UnityEngine::Rendering::RTHandleSystem*& __cordl_internal_get_m_RTHandleSystem() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Rendering::RTHandle*>>* const& __cordl_internal_get_m_RTHandles() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Rendering::RTHandle*>>*& __cordl_internal_get_m_RTHandles() ;

constexpr void __cordl_internal_set_m_DisposedValue(bool  value) ;

constexpr void __cordl_internal_set_m_RTHandleSystem(::UnityEngine::Rendering::RTHandleSystem*  value) ;

constexpr void __cordl_internal_set_m_RTHandles(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Rendering::RTHandle*>>*  value) ;

/// @brief Method .ctor, addr 0x1820354f0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_maxHeight, addr 0x182035560, size 0x10, virtual false, abstract: false, final false
inline int32_t get_maxHeight() ;

/// @brief Method get_maxWidth, addr 0x182035570, size 0x10, virtual false, abstract: false, final false
inline int32_t get_maxWidth() ;

/// @brief Method get_rtHandleProperties, addr 0x182035580, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedRTHandleSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedRTHandleSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedRTHandleSystem(BufferedRTHandleSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedRTHandleSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedRTHandleSystem(BufferedRTHandleSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7047};

/// @brief Field m_RTHandles, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Rendering::RTHandle*>>*  ___m_RTHandles;

/// @brief Field m_RTHandleSystem, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandleSystem*  ___m_RTHandleSystem;

/// @brief Field m_DisposedValue, offset: 0x20, size: 0x1, def value: None
 bool  ___m_DisposedValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BufferedRTHandleSystem, ___m_RTHandles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BufferedRTHandleSystem, ___m_RTHandleSystem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BufferedRTHandleSystem, ___m_DisposedValue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::BufferedRTHandleSystem) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
