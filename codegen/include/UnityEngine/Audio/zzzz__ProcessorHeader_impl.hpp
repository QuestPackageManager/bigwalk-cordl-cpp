#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorHeader.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
// Ctor Parameters [CppParam { name: "m_Control", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DualThreadHandle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: Some("{}") }, CppParam { name: "NativeProcessorFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "NativeControlFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "ProcessorReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "ControlReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::ProcessorHeader::ProcessorHeader(void*  m_Control, ::Unity::Audio::Handle  DualThreadHandle, ::System::IntPtr  NativeProcessorFunction, ::System::IntPtr  NativeControlFunction, ::System::IntPtr  ProcessorReflectionData, ::System::IntPtr  ControlReflectionData) noexcept  {
this->m_Control = m_Control;
this->DualThreadHandle = DualThreadHandle;
this->NativeProcessorFunction = NativeProcessorFunction;
this->NativeControlFunction = NativeControlFunction;
this->ProcessorReflectionData = ProcessorReflectionData;
this->ControlReflectionData = ControlReflectionData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorHeader::ProcessorHeader()   {
}
