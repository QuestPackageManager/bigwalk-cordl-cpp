#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerTemplateElementIdentifier_Editor.hpp"
#include "Rewired/zzzz__ControllerElementType_impl.hpp"
#include "Rewired/zzzz__ControllerTemplateElementIdentifier_impl.hpp"
#include "Rewired/Data/zzzz__ControllerTemplateElementIdentifier_Editor_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerElementIdentifierCommon_Internal_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerTemplateElementIdentifier_Editor_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerTemplateElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementIdentifier_def.hpp"
#include "Rewired/zzzz__ControllerTemplateElementType_def.hpp"
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.get_scriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_scriptingName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"get_scriptingName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.set_scriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)(::StringW)>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::set_scriptingName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180374490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"set_scriptingName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.get_alternateScriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_alternateScriptingName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"get_alternateScriptingName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.set_alternateScriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)(::StringW)>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::set_alternateScriptingName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"set_alternateScriptingName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.get_excludeFromExport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_excludeFromExport)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"get_excludeFromExport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.get_useEditorElementTypeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_useEditorElementTypeOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                    {::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.get_editorElementTypeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_editorElementTypeOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181561f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                    {::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.get_effectiveElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementType (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_effectiveElementType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818a21c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"get_effectiveElementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)(::Rewired::Data::ControllerTemplateElementIdentifier_Editor*)>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818a2130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_scriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_scriptingName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"Rewired.Interfaces.IControllerTemplateElementIdentifier_Editor.get_scriptingName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_alternateScriptingName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_alternateScriptingName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"Rewired.Interfaces.IControllerTemplateElementIdentifier_Editor.get_alternateScriptingName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerTemplateElementIdentifier_Editor.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerTemplateElementIdentifier* (::Rewired::Data::ControllerTemplateElementIdentifier_Editor::*)()>(&::Rewired::Data::ControllerTemplateElementIdentifier_Editor::Clone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818a2090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                    {::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(), 56}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__scriptingName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptingName;
}
constexpr ::StringW const& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__scriptingName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scriptingName;
}
constexpr void Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_set__scriptingName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scriptingName = value;
}
constexpr ::StringW& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__alternateScriptingName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateScriptingName;
}
constexpr ::StringW const& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__alternateScriptingName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alternateScriptingName;
}
constexpr void Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_set__alternateScriptingName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alternateScriptingName = value;
}
constexpr bool& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__excludeFromExport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeFromExport;
}
constexpr bool const& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__excludeFromExport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeFromExport;
}
constexpr void Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_set__excludeFromExport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____excludeFromExport = value;
}
constexpr bool& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__useEditorElementTypeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useEditorElementTypeOverride;
}
constexpr bool const& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__useEditorElementTypeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useEditorElementTypeOverride;
}
constexpr void Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_set__useEditorElementTypeOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useEditorElementTypeOverride = value;
}
constexpr ::Rewired::ControllerElementType& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__editorElementTypeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editorElementTypeOverride;
}
constexpr ::Rewired::ControllerElementType const& Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_get__editorElementTypeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editorElementTypeOverride;
}
constexpr void Rewired::Data::ControllerTemplateElementIdentifier_Editor::__cordl_internal_set__editorElementTypeOverride(::Rewired::ControllerElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____editorElementTypeOverride = value;
}
inline ::StringW Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_scriptingName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"get_scriptingName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerTemplateElementIdentifier_Editor::set_scriptingName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"set_scriptingName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_alternateScriptingName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"get_alternateScriptingName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerTemplateElementIdentifier_Editor::set_alternateScriptingName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"set_alternateScriptingName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_excludeFromExport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"get_excludeFromExport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_useEditorElementTypeOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::ControllerElementType Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_editorElementTypeOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateElementType Rewired::Data::ControllerTemplateElementIdentifier_Editor::get_effectiveElementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"get_effectiveElementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementType>(this, ___internal_method);
}
inline void Rewired::Data::ControllerTemplateElementIdentifier_Editor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::ControllerTemplateElementIdentifier_Editor::_ctor(::Rewired::Data::ControllerTemplateElementIdentifier_Editor*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::Data::ControllerTemplateElementIdentifier_Editor::Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_scriptingName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"Rewired.Interfaces.IControllerTemplateElementIdentifier_Editor.get_scriptingName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Data::ControllerTemplateElementIdentifier_Editor::Rewired_Interfaces_IControllerTemplateElementIdentifier_Editor_get_alternateScriptingName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(),
                        {"Rewired.Interfaces.IControllerTemplateElementIdentifier_Editor.get_alternateScriptingName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Rewired::ControllerTemplateElementIdentifier* Rewired::Data::ControllerTemplateElementIdentifier_Editor::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerTemplateElementIdentifier*>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerTemplateElementIdentifier_Editor* Rewired::Data::ControllerTemplateElementIdentifier_Editor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>());
}
inline ::Rewired::Data::ControllerTemplateElementIdentifier_Editor* Rewired::Data::ControllerTemplateElementIdentifier_Editor::New_ctor(::Rewired::Data::ControllerTemplateElementIdentifier_Editor*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerTemplateElementIdentifier_Editor*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor"
constexpr  Rewired::Data::ControllerTemplateElementIdentifier_Editor::operator ::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor"
constexpr ::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor* Rewired::Data::ControllerTemplateElementIdentifier_Editor::i___Rewired__Interfaces__IControllerTemplateElementIdentifier_Editor() noexcept {
return static_cast<::Rewired::Interfaces::IControllerTemplateElementIdentifier_Editor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerTemplateElementIdentifier"
constexpr  Rewired::Data::ControllerTemplateElementIdentifier_Editor::operator ::Rewired::Interfaces::IControllerTemplateElementIdentifier*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerTemplateElementIdentifier"
constexpr ::Rewired::Interfaces::IControllerTemplateElementIdentifier* Rewired::Data::ControllerTemplateElementIdentifier_Editor::i___Rewired__Interfaces__IControllerTemplateElementIdentifier() noexcept {
return static_cast<::Rewired::Interfaces::IControllerTemplateElementIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr  Rewired::Data::ControllerTemplateElementIdentifier_Editor::operator ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal"
constexpr ::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired::Data::ControllerTemplateElementIdentifier_Editor::i___Rewired__Interfaces__IControllerElementIdentifierCommon_Internal() noexcept {
return static_cast<::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerTemplateElementIdentifier_Editor::ControllerTemplateElementIdentifier_Editor()   {
}
