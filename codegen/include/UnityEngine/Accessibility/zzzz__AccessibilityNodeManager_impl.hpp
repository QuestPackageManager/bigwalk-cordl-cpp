#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNodeManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeManager_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeData_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityScrollDirection_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.CreateNativeNodeWithData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Accessibility::AccessibilityNodeData)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::CreateNativeNodeWithData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822146c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"CreateNativeNodeWithData", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNodeData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.DestroyNativeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::DestroyNativeNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822146e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"DestroyNativeNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.SetFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Rect)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::SetFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182214ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeFocusChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182214810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeFocusChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeNodeInvoked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeNodeInvoked)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182214970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeNodeInvoked", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeIncremented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeIncremented)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822148f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeIncremented", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeDecremented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeDecremented)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822146f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeDecremented", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeScrolled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::UnityEngine::Accessibility::AccessibilityScrollDirection)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeScrolled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182214a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeScrolled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Accessibility::AccessibilityScrollDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.Internal_InvokeDismissed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeDismissed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182214770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeDismissed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.CreateNativeNodeWithData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::CreateNativeNodeWithData_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822146b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"CreateNativeNodeWithData_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeManager.SetFrame_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Accessibility::AccessibilityNodeManager::SetFrame_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182214ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetFrame_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::CreateNativeNodeWithData(::UnityEngine::Accessibility::AccessibilityNodeData  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"CreateNativeNodeWithData", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNodeData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeData);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::DestroyNativeNode(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"DestroyNativeNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeId);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::SetFrame(int32_t  nodeId, ::UnityEngine::Rect  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeId, frame);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeFocusChanged(int32_t  nodeId, bool  isNodeFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeFocusChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeId, isNodeFocused);
}
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeNodeInvoked(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeNodeInvoked", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeId);
}
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeIncremented(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeIncremented", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeId);
}
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeDecremented(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeDecremented", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeId);
}
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeScrolled(int32_t  nodeId, ::UnityEngine::Accessibility::AccessibilityScrollDirection  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeScrolled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Accessibility::AccessibilityScrollDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeId, direction);
}
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::Internal_InvokeDismissed(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"Internal_InvokeDismissed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeId);
}
inline bool UnityEngine::Accessibility::AccessibilityNodeManager::CreateNativeNodeWithData_Injected(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"CreateNativeNodeWithData_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeData);
}
inline void UnityEngine::Accessibility::AccessibilityNodeManager::SetFrame_Injected(int32_t  nodeId, ::by_ref<::UnityEngine::Rect>  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeManager*>(),
                        {"SetFrame_Injected", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeId, frame);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityNodeManager::AccessibilityNodeManager()   {
}
